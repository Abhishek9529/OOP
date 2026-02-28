// P1 Lec24
// abstract class Bike {
//     abstract void run();
// }

// class Honda4 extends Bike{
//     void run(){
//         System.out.println("running safely..");
//     }
// }

// class Lec24{
//     public static void main(String [] args){
//         Bike b1 = new Honda4();
//         b1.run();
//     }
// }

// P2 Lec25

// Abstract class having constructor, data member, methods
// abstract class Bike{
//     Bike(){
//         System.out.println("bike is created");
//     }

//     abstract void run();

//     void changeGear(){
//         System.out.println("gear changed");
//     }
// }

// class Honda extends Bike{
//     void run(){
//         System.out.println("running safely..");
//     }
// }

// class Lec24{
//     public static void main(String[] args) {
//         Bike b1 = new Honda();
//         b1.run();
//         b1.changeGear();
//     }
// }

// Interface in Java

interface Printable {
    void print();
}

interface Showable{
 void print();
}

class A6 implements Printable, Showable{
    public void print(){
        System.out.println("Hi we are Learning Multiple Interface");
    }
}

class Lec24 {
    public static void main(String[] args) {
        A6 obj = new A6();
        obj.print();
    }
}