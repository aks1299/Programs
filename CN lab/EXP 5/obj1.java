import java.io.*;
import java.net.URL;
import java.net.URLConnection;
public class obj1 {
    public static void main(String[] args) {
        String urlString = "https://www.example.com"; // Replace with the URL of the web page you want to download
        try {
            // Step 1: Create a URL object
            URL url = new URL(urlString);
            // Step 2: Open a connection to the URL
            URLConnection connection = url.openConnection();
            // Step 3: Create a BufferedReader to read the content
            BufferedReader reader = new BufferedReader(new InputStreamReader(connection.getInputStream()));
            // Step 4: Create a FileWriter to write the content to a file
            FileWriter writer = new FileWriter("downloaded_page.html"); // Change the file name if needed
            // Step 5: Read and write the content line by line
            String line;
            while ((line = reader.readLine()) != null) {
                writer.write(line);
                writer.write("\n"); // Add a newline character for better readability
            }
            // Step 6: Close the resources
            reader.close();
            writer.close();

            System.out.println("Web page downloaded successfully.");

        } catch (IOException e) {
            e.printStackTrace();
        }
    }
}
