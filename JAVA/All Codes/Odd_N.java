import java.util.Scanner;
class Odd_N
{
public static void main(String args[])
{
int num,i;

System.out.println("Enter the Number:");
Scanner S=new Scanner(System.in);
num=S.nextInt();
System.out.println("Odd Numbers are: ");
for (i = 1; i <= 2 * num; i++)
{
if (i % 2 == 1)
System.out.println(i);
}
}
}
