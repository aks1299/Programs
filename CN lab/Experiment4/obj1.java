import java.net.InetAddress;
import java.net.UnknownHostException;

public class obj1 {
    public static void main(String[] args) {
        String website = "www.google.com"; // Replace this with the website you want to find the IP address for

        try {
            // Get the InetAddress object representing the website
            InetAddress address = InetAddress.getByName(website);

            // Print the IP address of the website
            System.out.println("IP Address of " + website + ": " + address.getHostAddress());
        } catch (UnknownHostException e) {
            e.printStackTrace();
        }
    }
}
