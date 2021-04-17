import java.util.Scanner;
class Area_of_Circle
{
public static void main(String args[])
{
int r;
double pi=3.14,area;
Scanner A=new Scanner(System.in);
System.out.println("..........................................");
System.out.println("Radius of Circle:");
r=A.nextInt();
area=pi*r*r;
System.out.println("..........................................");
System.out.println("Area of Circle:"+area);

}
}