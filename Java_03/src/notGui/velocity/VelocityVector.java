package notGui.velocity;

/**
 * Created by wojtasiq on 09.06.2017.
 */
public class VelocityVector {
    int VelocityX,VelocityY;

    public VelocityVector(int x, int y){
        VelocityX = x;
        VelocityY = y;
    }

    public void setVelocityX(int velocityX) {
        VelocityX = velocityX;
    }

    public void setVelocityY(int velocityY) {
        VelocityY = velocityY;
    }

    public int getVelocityX() {
        return VelocityX;
    }

    public int getVelocityY() {
        return VelocityY;
    }
}
