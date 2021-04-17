import java.util.Scanner;
class Swap_2
{  
public static void main(String arg[])
{
int x,y;  
  
System.out.println("........................................\n");
System.out.println("First Number is:");
Scanner s=new Scanner(System.in); 
x=s.nextInt();
System.out.println("Second Number is:");
y=s.nextInt();
System.out.println("Before swapping:");
System.out.println("value of x:"+x );
System.out.println("value of x:"+y );
System.out.println("........................................\n");
  System.out.println("After swapping");  
  x = x + y;  
  y = x - y;  
  x = x - y;  
  System.out.println("value of x:" + x);  
  System.out.println("value of y:" + y);  
 }  
}   