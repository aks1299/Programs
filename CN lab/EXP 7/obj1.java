import java.io.IOException;
import java.net.InetAddress;
import java.net.Socket;

public class obj1 {
    public static void main(String[] args) {
        // Step 1: Define the hostname (or IP address) and port number of the target
        // server.
        String hostname = "www.example.com";
        int port = 80;

        // Step 2: Attempt to create a Socket object to establish a connection to the
        // specified host and port.
        try (Socket s = new Socket(hostname, port)) {
            // Step 3: Retrieve the local address information.
            InetAddress localAddress = s.getLocalAddress();

            // Step 4: Retrieve the local port number the socket is bound to.
            int localPort = s.getLocalPort();

            // Step 5: Retrieve the remote address information.
            InetAddress remoteAddress = s.getInetAddress();

            // Step 6: Retrieve the remote port number to which the socket is connected.
            int remotePort = s.getPort();

            // Step 7: Print the local and remote address and port information to the
            // console.
            System.out.println("Local IP address: " + localAddress.getHostAddress());
            System.out.println("Local port: " + localPort);
            System.out.println("Remote IP address: " + remoteAddress.getHostAddress());
            System.out.println("Remote port: " + remotePort);
        } catch (IOException e) {
            System.err.println("Error creating socket: " + e.getMessage());
        }
    }
}
