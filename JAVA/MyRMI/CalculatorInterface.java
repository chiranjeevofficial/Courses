import java.rmi.Remote;
import java.rmi.RemoteException;

interface CalculatorInterface extends Remote {
    int add(int a, int b) throws RemoteException;
    int subtract(int a, int b) throws RemoteException;
}
