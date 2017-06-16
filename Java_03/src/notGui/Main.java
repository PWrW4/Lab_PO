package notGui;

/**
 * Created by wojtasiq on 15.06.2017.
 */
public class Main {
    public static void main(String[] args) {
        MyShape rysowalny = new Rectangle(4,5,10,15,1,1);


        rysowalny.draw();

        rysowalny.move(0,10);

        rysowalny.draw();

        Mover mover = new Mover();

        mover.move(rysowalny, rysowalny.getVelocityVector());

        rysowalny.draw();
    }
}
