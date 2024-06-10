import java.util.Random;
import java.util.Scanner;

public class GuessThe {
    public static void randomNo(int number) {
        int guess = 0;
        Scanner sc = new Scanner(System.in);

        while (guess != number) {
            System.out.println("Enter Guess (1-1000)");
            guess = sc.nextInt();
            if (guess > number) {
                System.out.println("Guess Higher");

            } else if (guess < number) {
                System.out.println("Guess Lower");
            } else {
                System.out.println("You Won");
            }

        }
        sc.close();
    }

    public static void main(String[] args) {
        Random random = new Random();
        int n = random.nextInt(1000);
        randomNo(n);
    }
}