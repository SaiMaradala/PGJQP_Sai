import java.util.Scanner;
class Even_N
{
public static void main(String args[])
{
int num,i;

System.out.println("Enter the Number:");
Scanner S=new Scanner(System.in);
num=S.nextInt();
System.out.println("Even Numbers are: ");
for (i = 1; i <= 2 * num; i++)
{
if (i % 2 == 0)
System.out.println(i);
}
}
}
