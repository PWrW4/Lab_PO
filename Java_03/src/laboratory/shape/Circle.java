package laboratory.shape;

import javafx.scene.canvas.GraphicsContext;
import javafx.scene.paint.Color;

/**
 * Created by wojtasiq on 02.06.2017.
 */
public class Circle extends MyShape {
    double R,R2;

    public Circle(int x, int y, int initShapeSize, int initShapeSize1) {
        super(x,y);
        R = initShapeSize;
        R2 = initShapeSize1;
    }

    public double getR() {
        return R;
    }

    public void setR(double r) {
        R = r;
    }

    public Circle(double _x, double _y, double _r){
        super(_x, _y);
        R = _r;
    }

    @Override
    public void draw(GraphicsContext gc){
        //System.out.println("this is a circle!");

        gc.setFill(new Color(0,0,1,0.75));
        gc.fillOval(getX(),getY(),R,R);
    }

    @Override
    double surfaceArea() {
        return (3.14*R*R);
    }
}
