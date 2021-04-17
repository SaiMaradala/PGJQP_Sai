import java.util.Scanner;
class Even_Odd
{
public static void main (String args[])
{
int even=0,odd=0;
Scanner scan=new Scanner(System.in);
System.out.println("Enter the array size :");
int size=scan.nextInt();
System.out.println("Enter the Elements :");
int arr[]=new int[size];
for(int i=0; i<arr.length; i++)
{
arr[i]=scan.nextInt();
}
for(int i=0; i<size; i++)
{
 if(arr[i]%2==0)
{
even++; 
}
else
{
odd++;
}
}
System.out.println("Even numbers : "+even);    
System.out.println("Odd numbers : "+odd);
}
}