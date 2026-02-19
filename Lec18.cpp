#include <iostream>
using namespace std;

// this keyword use case one
//class Employee{
//	public:
//		int id;
//		string name;
//		float salary;
//		
//		Employee(int id, string name, float salary){
//			this->id = id;
//			this->name = name;
//			this->salary = salary;
//		}
//		
//		void display(){
//			cout<< id << " "<< name << " "<<salary << endl; 
//		}
//};
//
//int main(void){
//	Employee emp1 =  Employee(18, "Virat", 100000.0);
//	Employee emp2 =  Employee(45, "rohit", 50000.0);
//	emp1.display();
//	emp2.display();
//	return 0;
//
//}


//this keyword use case two
//class Test {
//	public:
//		string testString;
//		
//		void setData(string testString){
//			this->testString = testString;
//		}
//		
//		void getAndPrint(string str){
//			this->setData(str);
//			cout<<" the string is : " << this->testString << endl;
//		}
//		
//};
//
//int main(){
//	Test test;
//	test.getAndPrint("This is a test for member accession!");
//	return 0;
//}


// this keyword third use case
class Complex {
	private:
		double real;
		double imaginary;
		
	public:
		// Constructor to initialize a complex number
		Complex(double r, double i){
			real = r;
			imaginary = i;
		}
		
	// Method to add two complex numbers
	Complex add(Complex& other){
		double sumReal = real + other.real;
		double sumImaginary = imaginary + other.imaginary;
		return Complex(sumReal, sumImaginary);
//		return *this;
	}
	
	// Method to display the complex number
	void display(){
		cout<< real << " + " << imaginary << "i" <<endl;
	}
};

int main(){
	double userReal, userImaginary;
	
	cout<< "Enter a complex number (real part):";
	cin>> userReal;
	cout<< "Enter a imaginary part :";
	cin>> userImaginary;
	
	// Create a another number using the user's input 
	Complex userComplex(userReal, userImaginary);
	
	// Create another complex number using the constructor
	Complex constructorComplex(3.5, 2.0); // Example values
	
	// Add the two complex numbers
	Complex result = userComplex.add(constructorComplex);
	
	cout<< "User's' complex number : "; 
	userComplex.display();
	
	cout<< "complex number from constructor: ";
	constructorComplex.display();
	
	cout<< "Sum of complex number :";
	result.display();
	
	return 0;
}

