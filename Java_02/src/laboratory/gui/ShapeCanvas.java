package laboratory.gui;

import javafx.scene.Node;
import javafx.scene.canvas.Canvas;
import laboratory.shape.MyShape;
import laboratory.shape.ShapeFactory;

import java.util.ArrayList;
import java.util.List;

/**
 * @author plechowicz
 *         created on 5/29/17.
 */
public class ShapeCanvas {

	private final Canvas canvas;

	private List<MyShape> shapes;

	private final int width;
	private final int height;

	public ShapeCanvas(int width, int height) {
		this.width = width;
		this.height = height;
		canvas = new Canvas(width, height);
		shapes = createShapes();
		drawShapes();
	}

	public void drawShapes() {
		for (MyShape shape : shapes) {
			shape.draw(canvas.getGraphicsContext2D());
		}
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
}
