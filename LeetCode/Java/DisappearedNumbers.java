import java.util.*;

public class DisappearedNumbers {
    public static List<Integer> findDisappearedNumbers(int[] nums) {
        Set<Integer> numbers = new HashSet<>();
        for(int i=1; i<=nums.length; i++)
            numbers.add(i);
        
        for(int i : nums) {
            if(numbers.contains(i))
                numbers.remove(i);
        }
        List<Integer> result = new ArrayList<>();
        for(Integer i : numbers)
            result.add(i);
        
        return result;
    }

    public static void main(String args[]) {
        int[] input = {4,3,2,7,8,2,3,1};
        System.out.println(findDisappearedNumbers(input));
    }
}