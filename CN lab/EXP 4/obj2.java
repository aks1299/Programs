import java.net.InetAddress;
import java.net.UnknownHostException;

public class obj2 {

    public static void main(String[] args) {
        try {
            InetAddress localhost = InetAddress.getLocalHost();
            System.out.println("IP Address of Localhost: " + localhost.getHostAddress());
        } catch (UnknownHostException e) {
            e.printStackTrace();
        }
    }
}
