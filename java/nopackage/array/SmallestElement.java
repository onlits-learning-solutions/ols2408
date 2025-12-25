
import java.util.Scanner;

class SmallestElement {
    public static void main(String[] args)
    {
        int[] arr = new int[10];
        int sm, pos=0;
        Scanner scanner = new Scanner(System.in);

        System.out.printf("Enter 5 elements below:\n");
        for(int i=0; i<5; i++)
        {
            arr[i] = scanner.nextInt();
        }

        sm = arr[0];
        for(int i=1; i<5; i++)
        {
            if(arr[i] < sm)
            {
                sm = arr[i];
                pos = i;
            }
        }

        System.out.printf("The value of the smallest element is %d.\n", sm);
        System.out.printf("The position of the smallest element is %d.", pos);
    }
}