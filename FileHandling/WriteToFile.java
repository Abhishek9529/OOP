import java.io.FileWriter;
import java.io.FileReader;
import java.io.BufferedReader;
import java.io.IOException;

public class WriteToFile{
    public static void main(String[] args) {
        try {
            FileWriter myWriter = new FileWriter("example2.txt", true);
            myWriter.write("Appending to the file");
            myWriter.close();
            System.out.println("Successfully wrote to the file.");
        } catch (IOException e) {
           e.printStackTrace();
        }
    }
}

// Reading from a File
// public class WriteToFile{
//     public static void main(String[] args) {
//         try {
//             BufferedReader reader = new BufferedReader(new FileReader("example.txt"));
//             String line;

//             while((line = reader.readLine()) != null){
//                 System.out.println(line);
//             }

//             reader.close();
//         } catch (IOException e) {
//             e.printStackTrace();
//         }
//     }
// }