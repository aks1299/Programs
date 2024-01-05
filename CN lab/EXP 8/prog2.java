import java.io.IOException;
import java.net.Socket;

public class prog2 {

    public static void main(String[] args) {
        // Step 1: Establish Connection to a Remote Server
        String serverHostname = "example.com";
        int serverPort = 80;

        try {
            Socket socket = new Socket(serverHostname, serverPort);

            // Step 2: Retrieve Local Ephemeral Port
            int localPort = socket.getLocalPort();

            // Step 3: Display Ephemeral Port
            System.out.println("Connected to " + serverHostname + " on port " + serverPort);
            System.out.println("Local Ephemeral Port: " + localPort);

            // Step 4: Close Connection
            socket.close();

        } catch (IOException e) {
            e.printStackTrace();
        }
    }
}
