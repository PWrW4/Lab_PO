package laboratory.shape;

import javafx.scene.canvas.GraphicsContext;
import javafx.scene.paint.Color;

/**
 * Created by wojtasiq on 02.06.2017.
 */
public class Rectangle extends MyShape {

    double lengthX,lengthY;

    public Rectangle(int x, int y, int initShapeSize) {
        super(x,y);
        lengthX = initShapeSize;
        lengthY = initShapeSize;
    }

    public double getLengthX() {
        return lengthX;
    }

    public double getLengthY() {
        return lengthY;
    }

    public void setLengthX(double lengthX) {
        this.lengthX = lengthX;
    }

    public void setLengthY(double lengthY) {
        this.lengthY = lengthY;
    }

    public Rectangle(double _x,double _y,double _lx,double _ly){
        super(_x, _y);
        lengthX = _lx;
        lengthY = _ly;
    }

    @Override
    public void draw(GraphicsContext gc){
        //System.out.println("this is a rectangle!");

        gc.setFill(new Color(1,0,0,0.75));
        gc.fillRect(getX(),getY(),lengthX,lengthY);
    }

    @Override
    double surfaceArea() {
        return lengthY*lengthX;
    }
}
