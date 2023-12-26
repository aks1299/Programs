import java.net.NetworkInterface;
import java.net.SocketException;
import java.util.Enumeration;

public class obj4{

    public static void main(String[] args) {
        try {
            Enumeration<NetworkInterface> networkInterfaces = NetworkInterface.getNetworkInterfaces();

            while (networkInterfaces.hasMoreElements()) {
                NetworkInterface networkInterface = networkInterfaces.nextElement();

                System.out.println("Interface Name: " + networkInterface.getName());
                System.out.println("Display Name: " + networkInterface.getDisplayName());
                System.out.println("Hardware Address (MAC): " + getMACAddress(networkInterface));
                System.out.println("MTU: " + networkInterface.getMTU());
                System.out.println("Is Up: " + networkInterface.isUp());
                System.out.println("Is Loopback: " + networkInterface.isLoopback());
                System.out.println("Is Point to Point: " + networkInterface.isPointToPoint());
                System.out.println("Supports Multicast: " + networkInterface.supportsMulticast());
                System.out.println();
            }
        } catch (SocketException e) {
            e.printStackTrace();
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
