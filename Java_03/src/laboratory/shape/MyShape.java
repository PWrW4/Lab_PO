package laboratory.shape;

import javafx.scene.canvas.GraphicsContext;
import laboratory.velocity.VelocityVector;

/**
 * @author plechowicz
 *         created on 5/16/17.
 */
public abstract class MyShape implements Drawable, Movable,Resizable {

    private double x,y;

    private VelocityVector VelocityVector;

    public VelocityVector getVelocityVector() {
        return VelocityVector;
    }

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

    abstract double surfaceArea();


}
