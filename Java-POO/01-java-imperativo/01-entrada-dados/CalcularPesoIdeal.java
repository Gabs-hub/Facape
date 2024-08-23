public class CalcularPesoIdeal {
    public static void main(String[] args) throws Exception {
        String nome, genero;
        double peso, altura;

        System.out.print("Digite seu nome: ");
        nome = JUtil.readString();

        System.out.println("Qual seu gênero?(M ou F): ");
        genero = JUtil.readString();

        System.out.print("Digite sua altura: ");
        altura = JUtil.readDouble();

        if (genero.equals("M") || genero.equals("m")) {
            peso = (72.7 * altura) - 58;
            System.out.println(nome);
            System.out.println("Peso ideal masculino: " + peso);
        } else if (genero.equals("F") || genero.equals("f")) {
            peso = (62.1 * altura) - 44.7;
            System.out.println(nome);
            System.out.println("Peso ideal feminino: " + peso);
        } else {
            System.out.println("Gênero não identificado");
        }
    }
}
