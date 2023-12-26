import java.io.*;
public class obj2_b 
{
    public static void main(String[] args) {
        String filePath = "D:\\Programs\\C Programs\\Weekly Assignment03\\studentscores.txt"; // Full path to the file which required to be opened
        long startTime = System.currentTimeMillis(); // Here time is logged for the first time
 
        try (InputStream inputStream = new FileInputStream(filePath)) { // File is opened using FileInputStream
        int bytesRead = 0;
        byte[] buffer = new byte[2048]; // Read in 1KB chunks
        while ((bytesRead = inputStream.read(buffer)) != -1) 
        {   // File is traversed here
            // Process the data (e.g., write to another file)
        }
        } 
        catch (IOException e) 
        {
            e.printStackTrace();
        }
 
        long endTime = System.currentTimeMillis(); // Execution ending time is logged here
        long duration = endTime - startTime; // Duration is evaluated by taking the interval of ending and start time
        System.out.println("Time taken without buffering: " + duration + " milliseconds");
    }
}