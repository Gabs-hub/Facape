import java.util.Scanner;

class TesteScanner {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int x, y;
        System.out.println("Digite um valor: ");
        x = sc.nextInt();
        System.out.println("Digite um valor: ");
        y = sc.nextInt();
        System.out.println("Resultado =  " + (x + y));
        sc.close();
    }
}