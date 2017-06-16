package notGui;

import javafx.scene.paint.Color;

import java.util.Random;

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
        System.out.println("jestem kolem");
    }

    @Override
    public void changeSize() {
        Random random   = new Random();
        //max powiekszenie 5x
        R = random.nextInt(5)+1;
    }

    String surfaceArea() {
        return "Area  = pi*"+R*R;
    }


}
