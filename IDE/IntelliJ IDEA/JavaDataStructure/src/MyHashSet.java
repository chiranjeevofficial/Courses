import java.util.HashSet;
import java.util.Iterator;

public class MyHashSet {
    public static void main(String[] args) {
        HashSet<Integer> hashSet = new HashSet<>();
        hashSet.add(1);
        hashSet.add(2);
        hashSet.add(3);
        if (hashSet.contains(1))
            System.out.println("HashSet Contains 1");
        if (!hashSet.contains(4))
            System.out.println("HashSet doesn't contains 4");
        Iterator<Integer> iterator = hashSet.iterator();
        while (iterator.hasNext()) {
            System.out.println("HashSet Element: " + iterator.next());
        }
    }
}
