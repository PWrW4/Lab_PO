package notGui;

import javafx.scene.canvas.GraphicsContext;
import javafx.scene.paint.Color;


/**
 * Created by wojtasiq on 02.06.2017.
 */
public class Rectangle extends MyShape {

    int lengthX,lengthY;

    public Rectangle(int _x,int _y,int _lx,int _ly,int Vx,int Vy){
        super(_x, _y,Vx,Vy);
        lengthX = _lx;
        lengthY = _ly;
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



    public void draw(GraphicsContext gc){

    }

    @Override
    String surfaceArea() {
        return "Area = "+lengthY*lengthX;
    }

    @Override
    public void randomResize() {

    }

}
