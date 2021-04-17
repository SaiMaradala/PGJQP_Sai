import java.util.Scanner;
class Prime_Numbers
{
public static void main(String args[])
{
int i,j,m,n,count;
System.out.println("Enter the Two Numbers:");
Scanner p=new Scanner(System.in);
System.out.println("First Number is:");
m=p.nextInt();
System.out.println("Second number is:");
n=p.nextInt();
System.out.println("Prine Numbers are:");
for(i=m;i<=n;i++)
{
count=0;
for(j=1;j<=i;j++)
{
if(i%j==0)
count=count+1;}
if(count==2)
System.out.println(i);
}}
}
