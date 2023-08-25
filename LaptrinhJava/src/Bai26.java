interface Moveable {
    public void moveUp();

    public void moveDown();

    public void moveLeft();

    public void moveRight();
}

class MoveablePoint implements Moveable {
    public int x;
    public int y;
    public int xSpeed;
    public int ySpeed;

    public MoveablePoint() {
    }

    public MoveablePoint(int x, int y, int xSpeed, int ySpeed) {
        this.x = x;
        this.y = y;
        this.xSpeed = xSpeed;
        this.ySpeed = ySpeed;
    }

    public void moveUp() {
        System.out.println("Move up!");
    }

    public void moveDown() {
        System.out.println("Move down!");
    }

    public void moveLeft() {
        System.out.println("Move left!");
    }

    public void moveRight() {
        System.out.println("Move right!");
    }
}

class MoveableCircle implements Moveable {
    public int radius;
    public MoveablePoint center;

    public MoveableCircle(int radius, MoveablePoint center) {
        this.radius = radius;
        this.center = center;
    }

    public void moveUp() {
        center.moveUp();
    }

    public void moveDown() {
        center.moveDown();
    }

    public void moveLeft() {
        center.moveLeft();
    }

    public void moveRight() {
        center.moveRight();
    }

    public String toString() {
        return "+ Radius: " + radius + ", x = " + center.x + ", y = " + center.y + ", x speed = " + center.xSpeed
                + ", y speed = " + center.ySpeed
                + "";
    }
}

public class Bai26 {
    public static void main(String[] args) {

    }
}
