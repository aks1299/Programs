import java.net.*;

public class obj2 {
    public static void main(String[] args) {
        try {
            InetAddress localhost = InetAddress.getLocalHost();
            
            System.out.println("IP Address of the current machine: " + localhost.getHostAddress());
        } catch (UnknownHostException e) {
            e.printStackTrace();
        }
    }
}
