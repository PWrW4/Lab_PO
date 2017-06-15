package laboratory.shape;

import javafx.scene.canvas.GraphicsContext;
import javafx.scene.paint.Color;

/**
 * Created by wojtasiq on 02.06.2017.
 */
public class Rectangle extends MyShape {

    int lengthX,lengthY;

    public Rectangle(int x, int y, int initShapeSize,int Vx,int Vy) {
        super(x,y,Vx,Vy);
        lengthX = initShapeSize;
        lengthY = initShapeSize;
    }

    public int getLengthX() {
        return lengthX;
    }

    public int getLengthY() {
        return lengthY;
    }

    public void setLengthX(int lengthX) {
        this.lengthX = lengthX;
    }

    public void setLengthY(int lengthY) {
        this.lengthY = lengthY;
    }

    public Rectangle(int _x,int _y,int _lx,int _ly,int Vx,int Vy){
        super(_x, _y,Vx,Vy);
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
    int surfaceArea() {
        return lengthY*lengthX;
    }

    @Override
    public void randomResize() {

    }

    @Override
    public int getRightBoundary() {
        return getX()+(getLengthX()/2);
    }

    @Override
    public int getLeftBoundary() {
        return getX()-(getLengthX()/2);
    }

    @Override
    public int getTopBoundary() {
        return getY()+(getLengthY()/2);
    }

    @Override
    public int getBottomBoundary() {
        return getY()-(getLengthY()/2);
    }

    @Override
    public int getWidth() {
        return getLengthX();
    }

    @Override
    public int getHeight() {
        return lengthY;
    }
}
