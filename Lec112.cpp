#include <iostream>
using namespace std;

// 1st program
//// Base class
//class Animal{
//	public:
//		void eat(){
//			cout<<" Animal is eating." << endl;
//		}
//};
//
//// Derived class inheriting from the base class
//class Dog : public Animal{
//	public:
//		void bark(){
//			cout<<" Dog is barking." << endl;
//		}
//};
//
//int main(){
//	// Creating an object of the derived class
//	Dog myDog;
//	
//	//Accessing base class method using the object of the derived class
//	myDog.eat();
//	myDog.bark();
//	return 0;
//}


// 2d program - example of single inheritance
class A{
	int a = 4;
	int b = 5;
	public:
		int mul(){
			int c = a*b;
			return c;
		}
};

class B: private A{
	public:
		void display(){
			int result = mul();
			cout<< "Multiplication of a and b is : " << result<< endl;
		}
};

int main(){
	B b;
	b.display();
	return 0;
}
