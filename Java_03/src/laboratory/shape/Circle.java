package laboratory.shape;

import javafx.scene.canvas.GraphicsContext;
import javafx.scene.paint.Color;

/**
 * Created by wojtasiq on 02.06.2017.
 */
public class Circle extends MyShape {
    int R,R2;

    public Circle(int x, int y, int initShapeSize, int initShapeSize1,int Vx,int Vy) {
        super(x,y,Vx,Vy);
        R = initShapeSize;
        R2 = initShapeSize1;
    }

    public int getR() {
        return R;
    }

    public void setR(int r) {
        R = r;
    }

    public Circle(int _x, int _y, int _r,int Vx, int Vy){
        super(_x, _y,Vx,Vy);
        R = _r;
    }

    @Override
    public void draw(GraphicsContext gc){
        //System.out.println("this is a circle!");

        gc.setFill(new Color(0,0,1,0.75));
        gc.fillOval(getX(),getY(),R,R);
    }

    @Override
    int surfaceArea() {
        return (R*R);
    }

    @Override
    public void randomResize() {

    }

    @Override
    public int getHeight() {
        return R2*2;
    }

    @Override
    public int getWidth() {
        return (int) (R*2);
    }

    @Override
    public int getBottomBoundary() {
        return getY()-R2;
    }

    @Override
    public int getTopBoundary() {
        return getY()+R2;
    }

    @Override
    public int getLeftBoundary() {
        return getX()-R;
    }

    @Override
    public int getRightBoundary() {
        return getX()+R;
    }
}
