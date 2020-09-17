//Medium - https://leetcode.com/problems/robot-bounded-in-circle/
//Author - Saumya Sachdev

public class RobotInCircle {
    public static boolean isRobotBounded(String instructions) {
        int positionX = 0, positionY = 0;
        int direction = 90;
        for(char c : instructions.toCharArray()) {
            if(c == 'G') {
                if(direction == 0)
                    positionX++;
                else if(direction == 90)
                    positionY++;
                else if(direction == 180)
                    positionX--;
                else
                    positionY--;
            } else if(c == 'L')
                direction += 90;
            else
                direction -= 90;
            direction = direction % 360;
        }
        return (positionX == 0 && positionY == 0) || direction != 90;
    }

    public static void main(String args[]) {
      String input = "GGLLGG";
      System.out.println(isRobotBounded(input));
    }
}
