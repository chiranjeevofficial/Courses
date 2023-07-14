package Program_13;

import java.rmi.*;
import java.rmi.registry.LocateRegistry;
import java.rmi.server.UnicastRemoteObject;

interface CalculatorInterface extends Remote {
    int add(int a, int b) throws RemoteException;
    int subtract(int a, int b) throws RemoteException;
}

class CalculatorImplementation extends UnicastRemoteObject implements CalculatorInterface {
    protected CalculatorImplementation() throws RemoteException {
        super();
    }

    @Override
    public int add(int a, int b) throws RemoteException {
        return a + b;
    }

    @Override
    public int subtract(int a, int b) throws RemoteException {
        return a - b;
    }
}


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

