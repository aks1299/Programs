import java.io.*;
import java.net.*;
import java.util.*;

public class obj1 {
    public static void main(String[] args) {
        String urlString = "https://example.com";
        CookieManager cookieManager = new CookieManager();
        if (urlString.endsWith(".gov")) {
            cookieManager.setCookiePolicy(CookiePolicy.ACCEPT_NONE);
        } else {
            cookieManager.setCookiePolicy(CookiePolicy.ACCEPT_ALL);
        }
        CookieHandler.setDefault(cookieManager);
        InputStream in = null;
        try {
            // Step 7
            URL url = new URL(urlString);
            HttpURLConnection connection = (HttpURLConnection) url.openConnection();
            in = new BufferedInputStream(connection.getInputStream());
            InputStreamReader reader = new InputStreamReader(in);

            // Read and print content
            int c;
            while ((c = reader.read()) != -1) {
                System.out.print((char) c);
            }

        } catch (MalformedURLException e) {
            System.err.println("Malformed URL: " + e.getMessage());
        } catch (IOException e) {
            System.err.println("IOException: " + e.getMessage());
        } finally {
            // Step 9
            if (in != null) {
                try {
                    in.close();
                } catch (IOException e) {
                    e.printStackTrace();
                }
            }
        }
        List<HttpCookie> cookies = cookieManager.getCookieStore().getCookies();
        for (HttpCookie cookie : cookies) {
            System.out.println("Cookie Name: " + cookie.getName());
            System.out.println("Cookie Domain: " + cookie.getDomain());
            System.out.println("Cookie Path: " + cookie.getPath());
            System.out.println("Cookie Secure: " + cookie.getSecure());
            System.out.println("Cookie Value: " + cookie.getValue());
            System.out.println("-------------------------------------------");
        }
    }
}