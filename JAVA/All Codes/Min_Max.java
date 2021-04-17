public class Min_Max
{
public static void main(String[] args) 
{
int arr[] = {4,14,24,34,44};		 
int max = arr[0];
int min = arr[0];

for(int i = 1; i < arr.length; i++){
if(max < arr[i])
{
max = arr[i];
}
else if(min > arr[i])
{
min = arr[i];
}		   		   
}

System.out.println("Maximum number:" + max);
System.out.println("...................");
System.out.println("Minimum number :" + min);		
}
}
