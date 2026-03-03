#include <iostream>
using namespace std;
//p1
//int main() {
//    try {
//	    throw 42;
//	} catch (int e) {
//		std::cout << "Caught exception: " << e << std::endl;
//   }
//	return 0;
//}

//p2
//int main() {
//    try {
//        throw "An error occurred";
//    } catch (const char* e) {
//        std::cout << "String exception: " << e << std::endl;
//    } catch (...) {
//        std::cout << "Unknown exception caught" << std::endl;
//    }
//    return 0;
//}

//p3
//double division(int a, int b){
//	if(b == 0){
//		throw "Division by zero condition ";
//	}
//	return (a/b);
//}
//
//int main(){
//	int l = 1729;
//	int m = 0;
//	double n = 0;
//	
//	try{
//		n = division(l, m);
//		cout<< n << endl;
//	} catch (const char* messg){
//		cerr << messg << endl;
//	}
//}


// Custom exception
#include <exception>
//class MyException : public exception{
//	public:
//		const char* what() const throw(){
//			return "Attempted to divide by zero\n";
//		}
//};
//
//int main(){
//	try{
//		int l, m;
//		cout<< "Enter the two numbers : \n";
//		cin>> l >> m;
//		if(m == 0){
//			MyException n;
//			throw n;
//		} else{
//			cout<<"l / m = "<< l/m << endl;
//			cout<<"You have done 50% of OOP"<<endl;
//			cout<< "All the best";
//		}
//	}
//	catch(exception& e){
//		cout<<e.what();
//	}
//}

//Lec 27
// Case Study 2: Exception Handling in Bank Account Management in C++
#include <iostream>
#include <stdexcept>

using namespace std;
class BankAccount {
	private:
		string accountHolder;
		double balance;
		
	public:
		BankAccount(string name, double initialBalance){
			if(initialBalance < 0){
				throw invalid_argument("Initial balance cannot be negative!");
			}
			accountHolder = name;
			balance = initialBalance;
		}
		
		// Function to deposite money
		void deposit(double amount){
			if(amount <= 0){
				throw invalid_argument("Deposite amount must be positive!");
			}
			balance += amount;
			cout<<"Deposit successful! New balance: Rs. "<< balance<<endl;
		}
		
		// Function to withdraw money
		void withdraw(double amount){
			if(amount > balance){
				throw runtime_error("Insufficient funds! cannot withdraw that amount");
			}
			if(amount <= 0){
				throw invalid_argument("Withdrawal amount must be positve");
			}
			balance -= amount;
			cout<<"Withdrawal successful! New balance: Rs. "<< balance<<endl;
		}
		
		// Function to display account information
		void display(){
			cout<<"Account Holder : "<< accountHolder<<endl;
			cout<<"Current Balance : Rs. "<< balance<<endl;
		}	
};

int main(){
	try{
		BankAccount account("Pradeep", 1000.0);
		account.display();
		
		account.deposit(500);
//		account.display();
		account.withdraw(2000);
	}
	catch(const invalid_argument& e){
		cerr<< "Error: "<< e.what()<<endl;
	}
	catch(const runtime_error& e){
		cerr<< "Error: "<< e.what()<<endl;
	}
	catch(exception& e){
		cerr<< "Error: "<< e.what()<<endl;
	}
	return 0;
}




