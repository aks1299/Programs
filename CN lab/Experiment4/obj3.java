import java.net.InetAddress;
import java.net.UnknownHostException;

public class obj3{

    public static void main(String[] args) {
        String ipAddress = "2001:0db8:85a3:0000:0000:8a2e:0370:7334";

        try {
            InetAddress inetAddress = InetAddress.getByName(ipAddress);

            if (inetAddress instanceof java.net.Inet4Address) {
                System.out.println("IPv4 Address");
            } else if (inetAddress instanceof java.net.Inet6Address) {
                System.out.println("IPv6 Address");
            } else {
                System.out.println("Not an IP Address");
            }
        } catch (UnknownHostException e) {
            System.out.println("Invalid IP Address");
        }
    }
}
