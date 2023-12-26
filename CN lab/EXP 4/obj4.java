import java.net.NetworkInterface;
import java.net.SocketException;
import java.util.Enumeration;
public class obj4 {
    public static void main(String[] args) throws SocketException {
        // Step 4: Retrieve an enumeration of all available network interfaces
        Enumeration<NetworkInterface> interfaces = NetworkInterface.getNetworkInterfaces();

        // Step 5: Start a while loop that iterates through all the network interfaces
        while (interfaces.hasMoreElements()) {
            // Step 6: Retrieve the next network interface in the enumeration
            NetworkInterface ni = interfaces.nextElement();

            // Step 7: Print information about each network interface
            System.out.println("Interface Name: " + ni.getName());
            System.out.println("Display Name: " + ni.getDisplayName());
            System.out.println("Hardware Address (MAC): " + getMACAddress(ni));
            System.out.println("MTU: " + ni.getMTU());
            System.out.println("Is Up: " + ni.isUp());
            System.out.println("Is Loopback: " + ni.isLoopback());
            System.out.println("Is Point to Point: " + ni.isPointToPoint());
            System.out.println("Supports Multicast: " + ni.supportsMulticast());
            System.out.println();
        }
    }
    private static String getMACAddress(NetworkInterface networkInterface) throws SocketException {
        byte[] mac = networkInterface.getHardwareAddress();
        if (mac == null) {
            return "N/A";
        }
        StringBuilder macAddress = new StringBuilder();
        for (int i = 0; i < mac.length; i++) {
            macAddress.append(String.format("%02X%s", mac[i], (i < mac.length - 1) ? "-" : ""));
        }
        return macAddress.toString();
    }
}
