import java.util.Scanner;
public class Positive_N
{
    public static void main(String args[])
    {
        int pos=0, neg=0, z=0, i;
        int arr[] = new int[10];
        Scanner scan = new Scanner(System.in);
		
        System.out.println("Enter Numbers : ");
        for(i=0; i<arr.length; i++){
            arr[i] = scan.nextInt();
        }
        for(i=0; i<arr.length; i++)
       {
            if(arr[i] < 0)
      {
                neg++;
            }
           else if(arr[i] == 0)
          {
                z++;
           }
            else
          {
                pos++;
            }
        }
		
        System.out.print( " Positive Numbers :"+pos);
        System.out.print("\n Negative Numbers :"+ neg);
        System.out.print("\n  Zero :"+ z);
    }
}