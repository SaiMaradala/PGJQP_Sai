import java.util.Arrays;
public class Add_A 
{
public static void main(String[] args) {
        int[] array1 = {1, 2, 3};
        int[] array2 = {4, 5, 6};

        int a= array1.length;
        int b = array2.length;
        int[] result = new int[a + b];

        System.out.println(array1, 0, result, 0, a);
        System.out.println(array2, 0, result, a, b);

        System.out.println(Arrays.toString(result));
    }}