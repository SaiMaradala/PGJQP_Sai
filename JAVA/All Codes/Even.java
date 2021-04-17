import java.util.Scanner;
class Even
{
public static void main(String args[])
{
int num;
System.out.println(".........................................................");
System.out.println("Enter the Number:");
Scanner s=new Scanner(System.in);
num=s.nextInt();
if(num%2==0)
{
System.out.println(".........................................................");
System.out.println("Entered Number is Even"+num);
}
else
{
System.out.println(".........................................................");
System.out.println("Entered Number is Odd");
}
}
}