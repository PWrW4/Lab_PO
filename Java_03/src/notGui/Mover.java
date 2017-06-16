package notGui;

import notGui.MyShape;
import notGui.velocity.VelocityVector;

/**
 * Created by wojtasiq on 09.06.2017.
 */
public class Mover {
    public void move(MyShape shape, VelocityVector velocityVector) {
        shape.setX(shape.getX() + velocityVector.getVelocityX());
        shape.setY(shape.getY() + velocityVector.getVelocityY());
    }
}
