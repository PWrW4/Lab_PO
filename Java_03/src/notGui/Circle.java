package notGui;

import javafx.scene.paint.Color;

/**
 * Created by wojtasiq on 02.06.2017.
 */
public class Circle extends MyShape {
    int R;

    public Circle(int x, int y, int _rx,int Vx,int Vy) {
        super(x,y,Vx,Vy);
        R = _rx;

    }

    public int getR() {
        return R;
    }



    public void setRx(int rx) {
        R = rx;
    }


    public void draw(){
    }

    String surfaceArea() {
        return "Area  = pi*"+R*R;
    }

    public void randomResize() {

    }

}
