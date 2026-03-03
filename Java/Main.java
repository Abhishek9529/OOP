import java.util.*;
import java.lang.*;
import java.io.*;

// class Calculator {
//     // Method to add two integers
//     public int add(int a, int b){
//         return a+ b;
//     }

//     // Overloded method to add three integers
//     public int add(int a, int b, int c){
//         return a+ b+ c;
//     }

//     // Overloded method to add double numbers
//     public double add(double a, double b){
//         return a+b;
//     }
// }

// public class Main{
//     public static void main(String[] args) {
//         Calculator calc = new Calculator();

//         // Calling the overloaded methods
//         System.out.println("Sum of two integers: " + calc.add(10, 20));
//         System.out.println("Sum of three integers: " + calc.add(10, 20, 30));
//         System.out.println("Sum of two doubles: " + calc.add(10.5, 20.5));
//     }

// }

// Example 2

// class MaxCalculator {

//     // Method to find the maximum of the integers
//     public int max(int a, int b) {
//         if (a > b) {
//             return a;
//         } else {
//             return b;
//         }
//     }

//     // Overloded method to find the maximum of three integers
//     public int max(int a, int b, int c) {
//         if (a > b && a > c) {
//             return a;
//         } else if (b > c) {
//             return b;
//         } else {
//             return c;
//         }
//     }
// }

// public class Main{
//     public static void main(String []args){
//         MaxCalculator calc = new MaxCalculator();

//         // Find the miximum of twointegers
//         System.out.println("Maximum of two integers: " + calc.max(10, 20));

//         // Find the maximum of three integers
//         System.out.println("Maximum of three integers: " + calc.max(10, 20, 30));

//     }
// }


// Case Study: Student Management System Using Method Overloading
class Student {
    private String name;

    // Constructor to initialize the student's name
    public Student(String name){
        this.name = name;
    }

    // Method to calculate grade based on perentage
    // (Method overloading with one parameter)
    public void calclulateGrade(double percentage){
        if(percentage >= 90){
            System.out.println(name + "has secured grade A");
        } else if(percentage >= 80){
            System.out.println(name + "has secured grade B");
        
        } else if(percentage >= 70){
            System.out.println(name + "has secured grade C");
        } else if(percentage >= 60){
            System.out.println(name + "has secured grade D");
        } else {
            System.out.println(name + "has Failed");
        }
    }

    // Overlodaded method to calculate grade based on letter grade
    // (Method overloading with one parameter)
    public void calclulateGrade(char letterGrade){
        switch(letterGrade){
            case 'A':
                System.out.println(name + "has secured grade A");
                break;
            case 'B':
                System.out.println(name + "has secured grade B");
                break;
            case 'C':
                System.out.println(name + "has secured grade C");
                break;
            case 'D':
                System.out.println(name + "has secured grade D");
                break;
            default:
                System.out.println(name + "has failed");
        }
    }

    public void calculateGrade(float gpa){
        if(gpa >= 4.0){
            System.out.println(name+ "has secured Grade A");
        } else if(gpa >= 3.0){
            System.out.println(name+ "has secured Grade B");
        } else if(gpa >= 2.0){
            System.out.println(name+ "has secured Grade C");
        } else if(gpa >= 1.0){
            System.out.println(name+ "has secured Grade D");
        } else {
            System.out.println(name+ "has failed");
        }
    }
}

public class Main{
    public static void main(String [] args){
        // Creating a new student object 
        Student student = new Student("Abhishek ");

        // Calculate grade based on percentage
        student.calclulateGrade(85.5);

        // Calculate grade based on letter grade
        student.calclulateGrade('B');

        // Calculate grade based on GPA
        student.calculateGrade(3.8f);
    }
}

