import java.util.Scanner;
class Zero
{
public static void main(String args[])
{
int num;
System.out.println(".......................................");
System.out.println("Enter the Number:");
Scanner S=new Scanner(System.in);
num=S.nextInt();
if(num==0)
{
System.out.println("Entered Number is 0 ");
}
else if(num>0)
{
System.out.println("Entered Number is Positive");
}
else if(num<0)
{
System.out.println("Entered number is Negative");
}
else
{
System.out.println("Not a Number");
}
}
}
