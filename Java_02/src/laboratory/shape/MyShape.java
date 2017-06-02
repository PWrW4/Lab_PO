package laboratory.shape;

import javafx.scene.canvas.GraphicsContext;

/**
 * @author plechowicz
 *         created on 5/30/17.
 */
public abstract class MyShape {
    private double x,y;

    public double getX() {
        return x;
    }

    public double getY() {
        return y;
    }

    public void setX(double x) {
        this.x = x;
    }

    public void setY(double y) {
        this.y = y;
    }

    public MyShape(double _x, double _y){
        x = _x;
        y = _y;
    }

    public abstract void draw(GraphicsContext gc);

    abstract double surfaceArea();
}
