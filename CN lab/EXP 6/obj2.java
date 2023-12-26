import java.io.*;
import java.net.*;
import java.util.Scanner;

public class obj2 {
    public static void main(String[] args) {
        try {
            // Prompt user for URL
            System.out.println("Enter the URL:");
            Scanner scanner = new Scanner(System.in);
            String website = scanner.nextLine();

            // Convert string to URL
            URL url = new URI(website).toURL();

            // Open URL connection
            URLConnection uc = url.openConnection();

            // Get content type
            String contentType = uc.getContentType();

            // Determine character encoding
            int start = contentType.indexOf("charset=");
            String encoding = "";
            if (start != -1) {
                encoding = contentType.substring(start + 8);
            }

            // Initialize InputStreamReader
            InputStreamReader in = new InputStreamReader(uc.getInputStream(), encoding);

            // Read and print content
            int c;
            while ((c = in.read()) != -1) {
                System.out.print((char) c);
            }
        } catch (Exception e) {
            System.out.println(e);
        }
    }
}
