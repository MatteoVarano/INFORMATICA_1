import java.util.Scanner;
public class MCD {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.print("Inserisci il primo numero: ");
        int numero1 = scanner.nextInt();
        System.out.print("Inserisci il secondo numero: ");
        int numero2 = scanner.nextInt();

        int mcd = calcolaMCD(numero1, numero2);

        System.out.println("Il Massimo Comune Divisore e': "+ mcd);

        scanner.close();
    }

    private static int calcolaMCD(int a, int b) {
        int t,r;
        if (a<b)
        {
            t = a;
            a=b;
            b=t;
        }

        do {
            r = a % b;
            if (r == 0) return b;
            a = b;
            b = r;
        }while(r!=0);

        return 0;
    }
}