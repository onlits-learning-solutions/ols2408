import java.util.Scanner;

public class Swap {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.print("Enter the value of a: ");
        int a = scanner.nextInt();
        System.out.print("Enter the value of b: ");
        int b = scanner.nextInt();

        int c = a;
        a = b;
        b = c;

        System.out.printf("The values of a and b after swapping are %d and %d, respectively.", a, b);
    }
}