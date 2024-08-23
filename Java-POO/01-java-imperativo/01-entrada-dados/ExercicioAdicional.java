public class ExercicioAdicional {
    public static void main(String[] args) throws Exception {
        String nome;
        float nota1,nota2;

        System.out.print("Digite o nome do aluno: ");
        nome = JUtil.readString();

        System.out.print("Digite a primeira nota: ");
        nota1 = JUtil.readFloat();

        System.out.print("Digite a segunda nota: ");
        nota2 = JUtil.readFloat();

        System.out.println(nome + ", nota final : " + ((nota1 * 40/100) + (nota2 * 60/100)));
    }
}
