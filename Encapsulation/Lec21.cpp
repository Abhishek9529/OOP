#include <iostream>
#include <string>
using namespace std;

//P1
//class Adder{
//	public:
//		Adder(int i =0){
//			total = i;
//		}
//		
//		//interface for outside world
//		void addNum(int number){
//			total += number;
//		}
//		
//		int getTotal(){
//			return total;
//		}
//		
//	private:
//		//hidden from the outside world 
//		int total;
//};
//
//int main(){
//	Adder a;
//	a.addNum(10);
//	a.addNum(30);
//	a.addNum(70);
//	
//	cout<<"Total " <<a.getTotal()<< endl;
//	return 0;
//}

//Case Study: Encapsulation:-  Student Grade Management System

class Student{
	private:
		string name;
		int rollNumber;
		char grade;
	
	public:
		Student(string name, int rollNumber, char grade ){
			this->name = name;
			this->rollNumber = rollNumber;
			setGrade(grade);
		}
		
		// Setter functions
		void setName(string name){
			this->name = name;
		}
		void setRollNumber(int rollNumber){
			this->rollNumber = rollNumber;
		}
		void setGrade(char grade){
			if(grade >= 'A' && grade <= 'F'){
				this->grade = grade;
			} else{
				cout<<" Invalid grade! grade must be between A and F"<< endl;
			}
			
		}
		
		//Getter functions
		string getName(){
			return name;
		}
		int getRollNumber(){
			return rollNumber;
		}
		char getGrade(){
			return grade;
		}
		
		// Method to display student details
		void displayStudentDetails(){
			cout<< "Student Name: " << name <<endl;
			cout<< "Roll Number: " << rollNumber <<endl;
			cout<< "Grade: " << grade <<endl;
		}
};

// Main function to demonstrate encapsulation
int main(){
	// Creating a student object with valid grade 
	Student s1("Pradeep", 101, 'A');
	s1.displayStudentDetails();
	
	s1.setName("Himanshu");
	s1.setGrade('B');
	
	cout<<"Updated student details: "<<endl;
	s1.displayStudentDetails();
	cout<<endl;
	
	//Attempt to set an invalid grade
	s1.setGrade('Z');
	return 0; 
}





