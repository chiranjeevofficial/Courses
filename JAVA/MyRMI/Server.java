import java.rmi.Naming;
import java.rmi.registry.LocateRegistry;

public class Server {
    public static void main(String[] args) {
        try {
            CalculatorImplementation calculator = new CalculatorImplementation();
            
            // Create and start the RMI registry
            LocateRegistry.createRegistry(1099);
            
            // Bind the calculator object to the registry
            Naming.rebind("CalculatorService", calculator);
            
            System.out.println("Server started");
        } catch (Exception e) {
            System.err.println("Server exception: " + e.toString());
        }
    }
}
