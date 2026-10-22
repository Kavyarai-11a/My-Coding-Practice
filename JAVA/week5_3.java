
enum TrafficLight 
{
    RED, YELLOW, GREEN
}

public class week5_3
  {
    public static void main(String[] args) 
      {
        TrafficLight light = TrafficLight.GREEN;

        switch (light) 
       {
            case RED:
                System.out.println("Stop");
                break;
            case YELLOW:
                System.out.println("Get Ready");
                break;
            case GREEN:
                System.out.println("Go");
                break;
        }
    }
}

