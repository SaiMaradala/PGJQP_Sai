import java.util.Scanner;
public class Count
{
    public static void main(String args[])
    {
        int countp=0, countn=0, countz=0, i;
        int arr[] = new int[10];
        Scanner scan = new Scanner(System.in);		
        System.out.println("Enter 10 Numbers : ");
        for(i=0; i<10; i++)
        {
            arr[i] = scan.nextInt();
        }
        for(i=0; i<10; i++)
        {
            if(arr[i] < 0)
            {
                countn++;
            }
            else if(arr[i] == 0)
            {
                countz++;
            }
            else
            {
                countp++;
            }
        }
		
        System.out.println(countp + " Positive Numbers");
        System.out.println("\n" + countn + " Negative Numbers");
        System.out.println("\n" + countz + " Zero");
    }
}