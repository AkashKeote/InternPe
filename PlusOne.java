import java.util.*;
public class PlusOne {

    public static int[] plusOne(int[] digits) {
        int n = digits.length;
        for (int i = n - 1; i >= 0; i--) {// saving time by accessing last element from right
            if (digits[i] < 9) {
                digits[i]++; // element incremented by one
                return digits; // return array ko as it is
            } else
                digits[i] = 0; // agar 9 se bada element raha to kya karu mai then
        }

        // int []b = new int[n + 1]; // ek new aaray banaya ya phir usi array me kiya to
        // chalega
        digits = new int[n + 1];
        digits[0] = 1;
        return digits;
    }

    public static void main(String[] args) {
        
        int akash[] = {9,9};
        System.out.println(Arrays.toString(plusOne(akash)));
    }

}
