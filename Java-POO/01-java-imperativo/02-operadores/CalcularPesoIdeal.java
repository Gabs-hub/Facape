public class CalcularPesoIdeal {
    public static void main(String[] args) throws Exception {
        String nome, genero;
        double peso, pesoIdeal, alturaIdeal, altura;

        System.out.print("Digite seu nome: ");
        nome = JUtil.readString();

        System.out.println("Qual seu gênero? (M ou F): ");
        genero = JUtil.readString();

        System.out.print("Digite sua altura: ");
        altura = JUtil.readDouble();

        System.out.print("Digite seu peso: ");
        peso = JUtil.readDouble();

        if (genero.equals("M") || genero.equals("m")) {
            pesoIdeal = (72.7 * altura) - 58;
            alturaIdeal = (peso + 58) / 72.7;

            System.out.println(nome);
            if (peso > pesoIdeal) {
                System.out.println("Acima do peso");
                System.out.printf("Altura ideal masculino: %.2f\n", alturaIdeal);
            } else if (peso < pesoIdeal) {
                System.out.println("Abaixo do peso");
                System.out.printf("Altura ideal masculino: %.2f\n", alturaIdeal);
            } else {
                System.out.println("Peso e altura ideal");
            }

        } else if (genero.equals("F") || genero.equals("f")) {
            pesoIdeal = (62.1 * altura) - 44.7;
            alturaIdeal = (peso + 44.7) / 62.1;

            System.out.println(nome);
            if (peso > pesoIdeal) {
                System.out.println("Acima do peso");
                System.out.printf("Altura ideal feminina: %.2f\n", alturaIdeal);
            } else if (peso < pesoIdeal) {
                System.out.println("Abaixo do peso");
                System.out.printf("Altura ideal feminina: %.2f\n", alturaIdeal);
            } else {
                System.out.println("Peso e altura ideal");
            }
        } else {
            System.out.println("Gênero não identificado");
        }
    }
}