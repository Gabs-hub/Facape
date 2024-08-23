import java.util.Scanner;

public class ExercicioConta {
    public static void main(String[] args) {
        String numeroConta, nome;
        double saldo, totalCobrado, totalPagamentos, limite;

        Scanner scanner = new Scanner(System.in);
        System.out.print("Digite o número da conta: ");
        numeroConta = scanner.nextLine();

        System.out.print("Digite o nome: ");
        nome = scanner.nextLine();

        System.out.print("Digite o saldo inicial: ");
        saldo = scanner.nextDouble();

        System.out.print("Digite o total dos itens cobrados no mês: ");
        totalCobrado = scanner.nextDouble();

        System.out.print("Digite o total de pagamentos no mês: ");
        totalPagamentos = scanner.nextDouble();

        System.out.print("Digite o limite: ");
        limite = scanner.nextDouble();

        saldo = saldo + totalCobrado - totalPagamentos;

        scanner.close();

        if (limite < saldo){
            System.out.println("Saldo atual: " + saldo);
            System.out.println("Limite de crédito excedido em R$ " + (saldo - limite));
        }else{
            System.out.println("Saldo atual: " + saldo);
            System.out.println("Ainda pode comprar R$ " + (limite - saldo));
        }
    }
}
