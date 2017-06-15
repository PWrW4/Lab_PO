package laboratory.shape;

import java.util.Random;

/**
 * @author plechowicz
 *         created on 5/16/17.
 */
public class ShapeFactory {

	private static final Random random = new Random();

	private static final int initShapeSize = 50;

	public final int windowWidth;
	public final int windowHeight;


	public ShapeFactory(int windowWidth, int windowHeight) {
		this.windowWidth = windowWidth;
		this.windowHeight = windowHeight;
	}

	public MyShape generateShape() {
		int x = random.nextInt(windowWidth - initShapeSize);
		int y = random.nextInt(windowHeight - initShapeSize);
		switch (random.nextInt(4)) {
			case 0:
				return new Circle(x, y, initShapeSize,1,1);
			case 1:
				return new Rectangle(x, y, initShapeSize, initShapeSize,1,1);
			case 2:
				return new Circle(x, y, initShapeSize, initShapeSize,1,1);
			default:
				return new Rectangle(x, y, initShapeSize,1,1);
		}
	}
}
