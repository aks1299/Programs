import java.net.MalformedURLException;
import java.net.URL;

public class obj2 {

    public static void main(String[] args) {
        String url1 = "http://www.ibiblio.org/";
        String url2 = "http://ibiblio.org/";

        try {
            // Create URL objects
            URL ibiblio1 = new URL(url1);
            URL ibiblio2 = new URL(url2);

            // Check if the URLs are the same using the equals() method
            if (ibiblio1.equals(ibiblio2)) {
                System.out.println("The URLs are the same.");
            } else {
                System.out.println("The URLs are different.");
            }

        } catch (MalformedURLException e) {
            e.printStackTrace();
        }
    }
}
