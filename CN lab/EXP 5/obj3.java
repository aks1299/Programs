import java.net.URI;
import java.net.URISyntaxException;
import java.util.Scanner;

public class obj3 {

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.print("Enter a URI: ");
        String uriString = scanner.nextLine();

        try {
            // Create URI object
            URI uri = new URI(uriString);

            // Display components
            System.out.println("Scheme: " + uri.getScheme());
            System.out.println("Host: " + uri.getHost());
            System.out.println("Port: " + uri.getPort());
            System.out.println("Path: " + uri.getPath());
            System.out.println("Query: " + uri.getQuery());
            System.out.println("Fragment: " + uri.getFragment());
        } catch (URISyntaxException e) {
            System.out.println("Invalid URI syntax: " + e.getMessage());
        } finally {
            scanner.close();
        }
    }
}
