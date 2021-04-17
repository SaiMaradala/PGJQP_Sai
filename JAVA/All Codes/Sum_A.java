class Sum_A
{
   public static void main(String args[])
{
      int[] array = {4,14,24,34,44};
      int sum = 0;
      for( int num : array) 
{
          sum = sum+num;
      }
      System.out.println("Sum of array elements is:"+sum);
   }
}