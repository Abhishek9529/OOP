
#include<iostream>
using namespace std;

// Lecture : 11
// the public member
/*
class Line{
	public:
		double length;  // Declare the variable 
		void setLength(double len); // Decleare the function
		double getLength(void); // function Decleartion
};

// Member functions definitions
double Line::getLength(void){
	return length;
}

void Line::setLength(double len){
	length = len;
	
}

// Main function for the program
int main(){
	Line line;
	
	//set line length
	line.setLength(6.0);
	cout<<"Length of line : " << line.getLength() << endl;
	
	// set line length without member funtion
	line.length = 10.0; // ok: because length is public 
	cout<< "Length of line : "<< line.length <<endl;
	 
	return 0;
}
*/

//the private member
//class Box{
//	public :
//		double length;
//		void setWidth(double wid);
//		double getWidth(void);
//		
//	private:
//		double width;
//};
//
////Member functions definitions
//double Box::getWidth(void){
//	return width;
//}
//
//void Box::setWidth(double wid){
//	width = wid;
//}
//
//// Main function for the program
//int main(){ 
//	Box box;
//	// set box length without member function
//	box.length = 10.0;
//	cout<<" length of box : " << box.length <<endl;
//	
//	//set box width without member function
////	box.width = 10.0 // Error: because width is private
//	box.setWidth(10.0); // Use member function to set it.
//	cout<< "Width of box : " <<box.getWidth() << endl;
//	return 0;  
//}


//The Protected Members
class Box{
	protected:
		double width;
};

class SmallBox:Box { // SmallBox is the derived class
	public :
		void setSmallWidth(double wid);
		double getSmallWidth(void);
};

//Member functions of child class
double SmallBox::getSmallWidth(void){
	return width;
}

void SmallBox::setSmallWidth(double wid){
	width = wid;
}

// Main function for the program
int main(){ 
	SmallBox box;
	// set box width using member function
	box.setSmallWidth(5.0);
	cout<<" width of box : " << box.getSmallWidth() <<endl;
	
	return 0;
}


