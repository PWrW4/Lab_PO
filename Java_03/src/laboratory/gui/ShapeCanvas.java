package laboratory.gui;

import javafx.animation.KeyFrame;
import javafx.animation.Timeline;
import javafx.scene.Node;
import javafx.scene.canvas.Canvas;
import javafx.util.Duration;
import laboratory.shape.Mover;
import laboratory.shape.MyShape;
import laboratory.shape.Resizer;
import laboratory.shape.ShapeFactory;
import laboratory.velocity.VelocityVector;

import java.util.ArrayList;
import java.util.List;

/**
 * @author plechowicz
 *         created on 5/29/17.
 */
public class ShapeCanvas {

	private final Canvas canvas;

	private List<MyShape> shapes;

	private final Resizer resizer = new Resizer();
	private final Mover mover = new Mover();

	private final int width;
	private final int height;

	public ShapeCanvas(int width, int height) {
		this.width = width;
		this.height = height;
		canvas = new Canvas(width, height);
		shapes = createShapes();
		initTimeline();
	}

	private void initTimeline() {
		Timeline timeline = new Timeline(new KeyFrame(
				Duration.millis(50), event -> {
			clearCanvas();
			for (MyShape shape : shapes) {
				shape.draw(canvas.getGraphicsContext2D());
				checkBoundary(shape);
				mover.move(shape, shape.getVelocityVector());
				resizer.randomResize(shape);
			}
		}
		));
		timeline.setCycleCount(Timeline.INDEFINITE);
		timeline.play();
	}

	public Node getNode() {
		return canvas;
	}

	/**
	 * Creates list of shapes
	 *
	 * @return list
	 */
	private List<MyShape> createShapes() {
		ShapeFactory factory = new ShapeFactory((int) canvas.getWidth(), (int) canvas.getHeight());
		List<MyShape> shapes = new ArrayList<>();
		for (int i = 0; i < 100; i++) {
			shapes.add(factory.generateShape());
		}
		return shapes;
	}

	/**
	 * Repaints canvas
	 */
	public void clearCanvas() {
		canvas.getGraphicsContext2D().clearRect(0, 0, canvas.getWidth(), canvas.getHeight());
	}

	/**
	 * Check if shape is not outside the boundary
	 *
	 * @param shape
	 */
	private void checkBoundary(MyShape shape) {
		VelocityVector velocityVector = shape.getVelocityVector();
		if (shape.getLeftBoundary() <= 0) {
			shape.setX(0);
			velocityVector.setVelocityX(velocityVector.getVelocityX() * -1);
		} else if (shape.getRightBoundary() >= width) {
			shape.setX(width - shape.getWidth());
			velocityVector.setVelocityX(velocityVector.getVelocityX() * -1);
		}

		if (shape.getBottomBoundary() >= height) {
			shape.setY(height - shape.getHeight());
			velocityVector.setVelocityY(velocityVector.getVelocityY() * -1);
		} else if (shape.getTopBoundary() <= 0) {
			shape.setY(0);
			velocityVector.setVelocityY(velocityVector.getVelocityY() * -1);
		}
	}
}
