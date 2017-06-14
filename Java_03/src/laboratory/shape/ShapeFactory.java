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
//		switch (random.nextInt(4)) {
//			case 0:
//				return new MyCircle(x, y, initShapeSize);
//			case 1:
//				return new MyRectangle(x, y, initShapeSize, initShapeSize);
//			case 2:
//				return new MyOval(x, y, initShapeSize, initShapeSize);
//			default:
//				return new MySquare(x, y, initShapeSize);
//		}
		return null;
	}
}
