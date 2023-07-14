package Program_13;

import java.rmi.Naming;

public class Client {
    public static void main(String[] args) {
        try {
            // Lookup the remote object from the registry
            CalculatorInterface calculator = (CalculatorInterface) Naming.lookup("rmi://localhost/CalculatorService");

            int a = 10;
            int b = 5;

            // Invoke remote methods
            int sum = calculator.add(a, b);
            int difference = calculator.subtract(a, b);

            System.out.println("Sum: " + sum);
            System.out.println("Difference: " + difference);
        } catch (Exception e) {
            System.err.println("Client exception: " + e.toString());
        }
    }
}
