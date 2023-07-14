public class Main {
    public static void main(String[] args) {
        int[] a = {4, 7, 3, 34, 56, 34, 23, 45, 67, 45, 88};
        if (a.length > 0) {
            int max = a[0], min = a[0];
            for (int i : a) {
                //println("a[" + i + "]" + ": " + a[i]);
                if (max < i)
                    max = i;
                if (min > i)
                    min = i;
            }
            println("Maximum Value is: " + String.valueOf(max));
            println("Minimum Value is: " + String.valueOf(min));
        } else {
            println("Array size is too short...");
        }
    }

    public static void println(String s) {
        System.out.println(s);
    }
}
