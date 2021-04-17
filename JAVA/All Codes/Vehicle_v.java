

public class Vehicle_v {

	 int max_speed=166;
	 Vehicle_v(int max_speed)
	 {
		 
max_speed = max_speed;
	 }
	 public  void showmaxspeed()
	 {
	 System.out.println("The top speed is " + max_speed);
	 }
	} 

 class Main_v {

	public static void main(String[] args) {
		Vehicle_v a = new Vehicle_v(150);
		 a.showmaxspeed();
	}

}

