import java.util.Scanner;

class Sum {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.printf("Enter a number: ");
        int a = scanner.nextInt();
        System.out.printf("Enter another number: ");
        int b = scanner.nextInt();
        int c = a + b;
        System.out.printf("The sum is %d.", c);
    }
}