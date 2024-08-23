public class Entrada {
    public static void main(String[] args) throws Exception {
        String nome;
        int idade;
        double salario;

        nome = JUtil.readString();
        idade = JUtil.readInt();
        salario = JUtil.readDouble();

        System.out.println(nome + " " + idade + " " + salario);
    }
}