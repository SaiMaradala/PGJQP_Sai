class Vehicle_C
{
 int max_speed = 210;
 public void showmaxspeed()
 {
 System.out.println("The top speed is " + max_speed);
}
}
class Car extends Vehicle_C
{
 int max_speed = 180;
 public void showmaxspeed_vehicle()
 {
 System.out.println("The top speed of CAR is " + max_speed);
 System.out.println("The top speed of VEHICLE is " + super.max_speed);
 }
}
class MainClass
{
 public static void main(String args[])
 {
 
 Car b = new Car();
 b.showmaxspeed_vehicle();
 }
} 