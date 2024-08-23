public class CalcularAreaCirculo {
    public static void main(String[] args) throws Exception {
        double raio, diametro, circunferencia, area;

        System.out.print("Insira o raio: ");
        raio = JUtil.readDouble();

        diametro = raio * 2;
        circunferencia = diametro * Math.PI;
        area = Math.PI * Math.pow(raio, 2);

        System.out.printf("Diâmetro: %.2f\n", diametro);
        System.out.printf("Circunferência: %.2f\n", circunferencia);
        System.out.printf("Área: %.2f\n", area);
    }
}
