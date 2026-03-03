class Vehicle{
    void run(){
        System.out.println("Vehicle is running");
    }
}

class Bike2 extends Vehicle{
    void run(){
        System.out.println("Bike is running safely ");
    }

    public static void main(String [] args){
        Bike2 bike = new Bike2();
        bike.run();
    }
}


