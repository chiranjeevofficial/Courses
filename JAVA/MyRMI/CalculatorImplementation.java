import java.rmi.RemoteException;
import java.rmi.server.UnicastRemoteObject;

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
