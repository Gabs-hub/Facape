class TesteOperador {
    public static void main(String[] args) {
        int a = 3, b = 4;
        System.out.println("Resultado " +
                ((a == b) & (teste())));
        //operador de curto circuito
    }

    public static boolean teste() {
        int c = 5, d = 6;
        System.out.println("Entrou no teste");
        return (c == d);
    }
}