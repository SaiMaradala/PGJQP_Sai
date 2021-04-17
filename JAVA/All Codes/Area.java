import java.util.Scanner;
class Area
{
public static void main(String args[])
{
int Length,Breadth,Perimeter,Area;
Scanner A=new Scanner(System.in);
System.out.println("..........................................");
System.out.println("Length of the Rectangle:");
Length=A.nextInt();
System.out.println("...........................................");
System.out.println("Breadth of the Rectangle:");
Breadth=A.nextInt();
System.out.println("..........................................");
Perimeter=2*(Length+Breadth);
System.out.println("Perimeter of Rectangle is:"+Perimeter);
System.out.println("..........................................");
Area=Length*Breadth;
System.out.println("Area of Rectangle is:"+Area);
}
}