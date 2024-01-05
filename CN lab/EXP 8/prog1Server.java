import java.io.BufferedReader;
import java.io.DataOutputStream;
import java.io.IOException;
import java.io.InputStreamReader;
import java.net.ServerSocket;
import java.net.Socket;

public class prog1Server {

    public static void main(String[] args) {
        // Step 1: Initialize Server
        int portNumber = 6789;

        try {
            // Step 2: Create Server Socket
            ServerSocket welcomeSocket = new ServerSocket(portNumber);

            // Step 3: Start Server
            System.out.println("Echo TCP Server is running on port " + portNumber);

            while (true) {
                // Step 4: Listen for Client Connections
                // Step 5: Accept Client Connection
                Socket connectionSocket = welcomeSocket.accept();

                // Step 6: Setup Communication Streams
                BufferedReader inFromClient = new BufferedReader(
                        new InputStreamReader(connectionSocket.getInputStream()));
                DataOutputStream outToClient = new DataOutputStream(connectionSocket.getOutputStream());

                // Step 7: Receive Data from Client
                String clientData = inFromClient.readLine();

                // Step 8: Display Received Data
                System.out.println("Received from client: " + clientData);

                // Step 9: Echo Data Back to Client
                outToClient.writeBytes(clientData + "\n");

                // Step 10: Close Client Connection
                connectionSocket.close();

                // Step 11: Repeat Process
            }

        } catch (IOException e) {
            e.printStackTrace();
        }
    }
}
