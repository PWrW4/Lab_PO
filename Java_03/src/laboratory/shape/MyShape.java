package laboratory.shape;

import javafx.scene.canvas.GraphicsContext;
import laboratory.velocity.VelocityVector;

/**
 * @author plechowicz
 *         created on 5/16/17.
 */
public abstract class MyShape implements Drawable, Movable,Resizable {

    private int x,y;

    private VelocityVector VelocityVector;

    public VelocityVector getVelocityVector() {
        return VelocityVector;
    }

    public int getX() {
        return x;
    }

    public int getY() {
        return y;
    }

    public void setX(int x) {
        this.x = x;
    }

    public void setY(int y) {
        this.y = y;
    }

    public MyShape(int _x, int _y,int Vx,int Vy){
        x = _x;
        y = _y;
        VelocityVector = new VelocityVector(Vx,Vy);
    }

    @Override
    public void move(int x, int y) {
        setX(x);
        setY(y);
    }

    abstract int surfaceArea();


    public abstract int getLeftBoundary();

    public abstract int getRightBoundary();

    public abstract int getWidth();

    public abstract int getBottomBoundary();

    public abstract int getHeight();

    public abstract int getTopBoundary();
}
