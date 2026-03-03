class X{
    public void methodA(){
        System.out.println("hello iam method A of class X");
    }
}

class Y extends X{
    public void methodA(){
        System.out.println("hello iam method A of class Y");
    }
    public void methodB(){
        System.out.println("hello iam method B of class Y");
    }
}

public class Z {
    public static void main(String[] args) {
       X obj1 = new X(); // Reference and object X
       X obj2 = new Y(); // X Reference but Y object
       Y obj3 = new Y(); // Reference and object Y

       obj1.methodA();
       obj2.methodA();
       obj2.methodB();
       obj3.methodA();
       obj3.methodB();
    }

}
