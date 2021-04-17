import java.util.Scanner;
class Multiple_Table 
{
public static void main(String[] args) 
{
int []arr = new int[10];
int i,j,n,m;
Scanner s = new Scanner(System.in);
System.out.println("Enter 1st Mutiple  number:");        
n=s.nextInt();
for( i=1; i <= 10; i++)
{
System.out.println(n+" * "+i+" = "+n*i);
}
System.out.println("Enter Second Multiple number:");   
m=s.nextInt();
for( j=1; j <= 10; j++)
{
System.out.println(m+" * "+j+" = "+m*j);
}
}
}
