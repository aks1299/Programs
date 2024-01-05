import java.io.BufferedReader;
import java.io.DataOutputStream;
import java.io.IOException;
import java.io.InputStreamReader;
import java.net.Socket;

public class prog1Client {

    public static void main(String[] args) {
        // Step 1: Define Server Details
        String serverHostname = "localhost";
        int serverPort = 6789;

        try {
            // Step 2: Establish Connection to Server
            Socket clientSocket = new Socket(serverHostname, serverPort);

            // Step 3: Create Output Stream
            DataOutputStream outToServer = new DataOutputStream(clientSocket.getOutputStream());

            // Step 4: Create Input Stream
            BufferedReader inFromServer = new BufferedReader(new InputStreamReader(clientSocket.getInputStream()));

            // Step 5: Send Data to Server
            String sentence = "Hello, server!";
            outToServer.writeBytes(sentence + '\n');

            // Step 6: Receive Data from Server
            String modifiedSentence = inFromServer.readLine();

            // Step 7: Display Server Response
            System.out.println("FROM SERVER: " + modifiedSentence);

            // Step 8: Close Connection
            clientSocket.close();

        } catch (IOException e) {
            e.printStackTrace();
        }
    }
}
