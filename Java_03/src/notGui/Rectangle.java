package notGui;



import java.util.Random;


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



    @Override
    public void draw() {
        System.out.println("jestem kwadratem");
        System.out.println("X:"+getX());
        System.out.println("Y:"+getY());
    }

    @Override
    public void changeSize() {
        Random random   = new Random();
        //max powiekszenie 5x
        lengthX = random.nextInt(5)+1;
        lengthY = random.nextInt(5)+1;
    }

    @Override
    String surfaceArea() {
        return "Area = "+lengthY*lengthX;
    }



}
