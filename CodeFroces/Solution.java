import java.util.*;

public class Solution{
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int n = input.nextInt();
        List<Integer> nums = new ArrayList<>();
        int mininum = Integer.MAX_VALUE;
        while (n>0) {
            n--;
            int x = input.nextInt();
            if (x == 0) {
                System.out.println(x);
                return;
            } else if (x < 0) {
                mininum = Math.min(mininum, x*-1);
                nums.add(-1*x);
            } else {
                mininum = Math.min(mininum, x);
                nums.add(x);
            }
        }
        System.out.println(mininum);
    }
}