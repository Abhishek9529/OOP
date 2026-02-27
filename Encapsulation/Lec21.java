// P1
// class Animal{
//     private int age;

//     public int getAge(){
//         return age;
//     }

//     public void setAge(int age){
//         this.age = age;
//     }
// }
//  class Lec21 {
//     public static void main(String[] args) {
//        Animal a1 = new Animal();
//        a1.setAge(20);
//        System.out.println("Animal age is " + a1.getAge());
//     }
// }

// P2 Case Study: Bank Account Management System 
// Using Encapsulation in Java

class BankAccount{
    private String accountHolderName;
    private String accountNumber;
    private double balance;

    // Constructor to initailize account details
    public BankAccount(String accountHolderName, String accountNumber, double initialBalance){
        this.accountHolderName = accountHolderName;
        this.accountNumber = accountNumber;
        setBalance(initialBalance);
    }

    // Getter methods 
    public String getAccountHolderName(){
        return accountHolderName;
    }
    public String getAccountNumber(){
        return accountNumber;
    }
    public double getBalance(){
        return balance;
    }

    // Setter methods
    public void setAccountHolderName(String name){
        accountHolderName = name;
    }
    public void setAccountNumber(String number){
        accountNumber = number;
    }
    public void setBalance(double balance){
        if(balance >= 0){
            this.balance += balance;
        } else {
            System.out.println("Invalid balance! Balance cannot be negative.");
        }
        
    }

    // Method to deposite money
    public void deposit(double amount){
        if(amount > 0){
            balance += amount;
            System.out.println("Successfully deposited: " + amount);
        } else{
            System.out.println("Invalid deposit amount!");
        }
    } 

    // Method to withdraw money with validation
    public void withdraw(double amount){
        if(amount > 0 && amount <= balance){
            balance -= amount;
            System.out.println("Successfully withdrawn: " + amount);
        } else if (amount > balance){
            System.out.println("Insufficient balance for withdrawal!");
        } else {
            System.out.println("Invalid withdrawal amount!");
        }
    }

    // Method to display account details
    public void displayAccountDetails(){
        System.out.println("Account Holder: "+ accountHolderName);
        System.out.println("Account Number: "+ accountNumber);
        System.out.println("Balance: "+ balance);
    }
}

// Main class
public class Lec21{
    public static void main(String[] args) {
        // Creating a bank account object
        BankAccount account1 = new BankAccount("John", "ABC762375412", 500.00);
        // Display account details
        account1.displayAccountDetails();

        // Deposit money into account
        account1.deposit(150.00);

        // Withdraw money from the account
        account1.withdraw(100.00);

        // Attempt to withdraw more than the available balance
        account1.withdraw(600.00);

        // Display updated account details
        System.out.println("");
        account1.displayAccountDetails();
    }
}


