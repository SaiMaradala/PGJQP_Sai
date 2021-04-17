

public class Practice_2 {


		void add(int a,int b)
		{
			System.out.println(a+b);
		}
		void divide(int a,int b) throws ArithmeticException
		{
				System.out.println(a/b);		
		}
		public static void main(String[] args) {
		Practice_2 d=new Practice_2();
			try
			{
				d.add(10, 20);
				d.add(-9, -10);
				d.divide(34, 2);
				d.add(1, 44);
			}
			catch (Exception e) {
				System.out.println("Error message from main");
			}
			finally {
				System.out.println("Programe executed");
			}
		}
	}


