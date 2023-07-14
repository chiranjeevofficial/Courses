import java.util.HashMap;
import java.util.Iterator;
import java.util.Map;

public class ArrayComparison {
    public static void main(String[] args) {
        int[] a = {2, 3, 1, 5, 4, 2};
        int[] b = {1, 3, 2, 2, 4, 5};
        boolean hasEqual = false;
        Map<Integer, Integer> map = null;
        if (a.length != b.length) {
            System.out.println("Arrays are not equal");
        } else {
            map = new HashMap<Integer, Integer>();
            for (int x : a) {
                if (map.get(x) == null)
                    map.put(x, 1);
                else {
                    int count = map.get(x);
                    count++;
                    map.put(x, count);
                }
            }
            hasEqual = true;

            for (int x : b) {
                if (!map.containsKey(x)) {
                    hasEqual = false;
                    break;
                }
            }
        }

        if (hasEqual) {
            System.out.println("Arrays are equal");
            System.out.println(map);
        } else {
            System.out.println("Arrays are not equal");
        }
    }
}
