import java.io.*;

public class LerTeclado {
    public static void main(String args[]) {
        try {
            BufferedReader reader =
                    new BufferedReader(new InputStreamReader(System.in));

            // Le entao a palagra SAIR nao seja digitada  
            String linha = "";
            while (!linha.equals("SAIR")) {
                linha = reader.readLine();

                System.out.println("Voce digitou: " + linha);
            }
        } catch (IOException e) {
            System.out.println("Erro: " + e);
        }
    }
}