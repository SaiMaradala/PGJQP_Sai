import java.util.Scanner;
public class Reverse_A
{
   public static void main(String args[])
   {
       int size, i, j, temp;
       int arr[] = new int[50];
       Scanner s = new Scanner(System.in);   
       System.out.println("Enter Array Size : ");
       size = s.nextInt();   
       System.out.println("Enter Array Elements :");
       for(i=0; i<size; i++)
       {
           arr[i] = s.nextInt();
       }	   
       j = i - 1;     
       i = 0;     
       while(i<j)
       {
           temp = arr[i];
           arr[i] = arr[j];
           arr[j] = temp;
           i++;
           j--;
       }
	   
       System.out.println("Now the Reverse of Array is :");
       for(i=0; i<size; i++)
       {
           System.out.println(arr[i]+ "  ");
       }       
   }
}