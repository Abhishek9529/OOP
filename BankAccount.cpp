#include <iostream>
using namespace std;
//class BankAccount {
//private:
//    double balance;
//
//public:
//    BankAccount(double initial) : balance(initial) {}
//
//    void deposit(double amount) {
//        balance += amount;
//    }
//
//    double getBalance() {
//        return balance;
//    }
//};
//
//int main() {
//    BankAccount account(100.0);
//    account.deposit(50.0);
//    std::cout << account.getBalance();
//    return 0;
//}



class Example 
{private: 
   int secret;
   public:
       
	   void setSecret(int value) {
	          secret = value;
			      }
			int getSecret() {
			     return secret;
				     }
					 };
int main() {     Example obj;
    obj.setSecret(42);
	   std::cout << obj.getSecret();
	       return 0;
		   }
