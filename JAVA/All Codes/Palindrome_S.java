import java.util.Scanner;
class Palindrome_S
{
    public static void main(String args[])
    {
        int n;
        String a, b = "";
        Scanner s = new Scanner(System.in);
        System.out.print("Enter the string :");
        a = s.nextLine();
        n = a.length();
        for(int i = n - 1; i >= 0; i--)
        {
            b = b + a.charAt(i);
        }
        if(a.equals(b))
        {
            System.out.println("Palindrome.");
        }
        else
        {
            System.out.println("Not a Palindrome.");
        }
    }
}