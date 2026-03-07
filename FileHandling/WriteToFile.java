import java.io.FileWriter;
import java.io.IOException;
public class WriteToFile{
    public static void main(String[] args) {
        try {
            FileWriter myWriter = new FileWriter("example2.txt");
            myWriter.write("Writing!");
            myWriter.close();
            System.out.println("Successfully wrote to the file.");
        } catch (IOException e) {
           e.printStackTrace();
        }
    }
}