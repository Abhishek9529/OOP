import java.util.*;
import java.lang.*;
import java.io.*;
// class MyException extends Exception {
//     public MyException(String message) {
//         super(message);
//     }
// }

// public class Lec26 {
//     public static void main(String[] args) {
//         try {
//             throw new MyException("Custom error");
//         } catch (MyException e) {
//             System.out.println(e.getMessage());
//         }
//     }
// }

// Lec 28
// Program no.2
// class Lec26{
//     public static void main(String[] args) {
//         int c = 100;
//         try {
//             try{
//                 System.out.println("going to divide");
//                 int b = 39/0;
//             } catch(ArithmeticException e){
//                 System.out.println(e);
//             }

//             try{
//                 int a[] = new int[5];
//                 a[5] = 4;
//             } catch(ArrayIndexOutOfBoundsException e){
//                 System.out.println(e);
//             }

//             System.out.println("other statement");
//             c= c/0;
//         } catch (Exception e) {
//             System.out.println("Handled");
//         }
//         System.out.println("normal flow");
//     }
// }


// Case Study 1
// Create a grading system where students are assigned grades based on their 
// marks. If a student enters invalid marks (below 0 or above 100), the system should 
// throw an exception and handle it using custom exception handling.
// Steps:
// • Create a Student class that holds a student’s marks.
// • Define a custom exception InvalidMarksException.
// • Use try,throw, and catch to handle invalid marks entered by students

// class InvalidMarksException extends Exception{
//     public InvalidMarksException(String msg){
//         super(msg);
//     }
// }

// class Student{
//     private int marks;
//     private String name;

//     public Student(int marks, String name) throws InvalidMarksException{
//         this.name = name;
//         setMarks(marks); // Set marks using setter to apply validation 
//     }

//     // Method to set the marks and validate them
//     public void setMarks(int marks) throws InvalidMarksException{
//         if(marks <= 0 || marks > 100){
//             throw new InvalidMarksException("Invalid marks : " + marks + ". marks should be between 0 and 100. ");
//         } else {
//             this.marks = marks;
//         }
//     }

//     // Method to calculate grade based on marks 
//     public char getGrade(){
//         if(marks >= 90){
//             return 'A';
//         } else if(marks >= 80){
//             return 'B';
//         } else if(marks >= 70){
//             return 'C';
//         } else if(marks >= 60){
//             return 'D';
//         } else {
//             return 'F';
//         }
//     }

//     // Method to display student information 
//     public void displayStudentInfo(){
//         System.out.println("Student Name: " + name);
//         System.out.println("Marks : " + marks);
//         System.out.println("Grade : " + getGrade());
//     }
// }

// public class Lec26 {
//     public static void main(String[] args) {
//         try {
//             Student student1 = new Student(0, "Raju");
//             student1.displayStudentInfo();
//         } catch (InvalidMarksException e) {
//             System.out.println("Exception caught: " + e.getMessage());
//         }
//     }
// }


// Case Study 2
// In this case study, we will create a university admission system where students must 
// be admitted based on certain criteria. The system will check whether the student 
// meets the age and score requirements for admission. If the student doesn't meet 
// the criteria, the system will throw exceptions. We'll use custom exceptions to handle 
// invalid cases and demonstrate the use of try, throw, catch, and throws.
// Requirements: 
// • Students must be at least 18 years old to apply for admission. 
// • Students must have a score of at least 60 to be eligible for 
// admission.
// 22
// Steps: 
// • Create a Student class that holds the student's name, age, and score.
// • Define two custom exceptions, InvalidAgeException and InsufficientScoreException.
// • Use throws to declare that the methods might throw an exception.
// • Use try, throw, and catch to handle the exceptions during the admission process.

class InvalidAgeException extends Exception{
    InvalidAgeException(String message) {
        super(message);
    }
}

class InsufficientScoreException extends Exception {
    InsufficientScoreException(String message) {
        super(message);
    }
}

class Student {
    private String name;
    private int age;
    private int score;

    public Student(String name, int age, int score) throws InvalidAgeException, InsufficientScoreException{
        this.name = name;;
        setAge(age);
        setScore(score);
    }

    public void setAge(int age) throws InvalidAgeException{
        if(age < 18){
            throw new InvalidAgeException("Student age must be at least 18 years old.");
        } else {
            this.age = age;
        }
    }

    public void setScore(int score) throws InsufficientScoreException{
        if(score < 60){
            throw new InsufficientScoreException("Student score must be at least 60.");
        } else {
            this.score = score;
        }
    }

    public void displayStudentInfo(){
        System.out.println("Student Name: " + name);
        System.out.println("Age: " + age);
        System.out.println("Score: " + score);
    }
}

class Lec26{
    public static void main(String[] args) {
        try {
            Student s1 = new Student("Raju", 21, 56);
            s1.displayStudentInfo();
        } catch (InvalidAgeException e) {
            System.out.println("Admission Failed : "+ e.getMessage());
        }
        catch (InsufficientScoreException e) {
            System.out.println("Admission Failed : "+ e.getMessage());
        }
    }
}