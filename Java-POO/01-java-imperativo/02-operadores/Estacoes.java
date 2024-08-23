import java.util.Scanner;

public class Estacoes {
    public static void main(String[] args) {
        String estacao;
        short opcao;

        Scanner scanner = new Scanner(System.in);
        System.out.print("Digite o número do mês: ");
        opcao = scanner.nextShort();

        switch (opcao){
            case 1,2,12:
                estacao = "Verão";
                break;
            case 3,4,5:
                estacao = "Outono";
                break;
            case 6,7,8:
                estacao = "Inverno";
                break;
            case 9,10,11:
                estacao = "Primavera";
                break;
            default:
                estacao = "Esta opção não existe";
        }

        System.out.println("Estação atual: " + estacao);
    }
}
