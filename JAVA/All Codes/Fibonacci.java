class Fibonacci {

    public static void main(String[] args) {

        int n = 10, t1 = 0, t2 = 1;
        System.out.println("Numbers are :"+ n);

        for (int i = 1; i <= n; ++i)
        {
            System.out.print("    "+t1); //(print)prints all the values in same line 

            int sum = t1 + t2;
            t1 = t2;
            t2 = sum;
        }
    }
}