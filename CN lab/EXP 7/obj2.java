import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.net.InetAddress;
import java.net.Socket;

public class obj2 {
    public static void main(String[] args) {
        // Step 1: Define the hostname (or IP address) and port number of the target
        // server.
        String hostname = "time.nist.gov";
        int port = 13;

        // Step 2: Attempt to create a Socket object to establish a connection to the
        // specified host and port.
        try (Socket s = new Socket(hostname, port)) {
            // Step 3: Create a BufferedReader object that wraps around an
            // InputStreamReader.
            BufferedReader in = new BufferedReader(new InputStreamReader(s.getInputStream()));

            // Step 4: Enter a loop to continuously read lines from the BufferedReader.
            String line;
            while ((line = in.readLine()) != null) {
                // For each line read (which is the server's response), print it to the console
                // with the prefix "Server Response: ".
                System.out.println("Server Response: " + line);
            }

            // Step 5: Continue the loop until there are no more lines to read.
            // Step 6: Once the loop is exited, close the socket to free up system resources
            // and end the network connection.
            s.close();
        } catch (IOException e) {
            // Step 7: Include error handling using a try-catch block.
            System.err.println("Error creating socket: " + e.getMessage());
        }
    }
}
