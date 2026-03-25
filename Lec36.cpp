#include <iostream>
#include <string>
using namespace std;

// Template definition with two types: T1 and T2
template <typename T1, typename T2>
class Pair {
	T1 first;
	T2 second;
	
	public:
		// Constructor
		Pair(T1 a, T2 b) : first(a), second(b){}
		
		// Getter functions
		T1 getFirst() const {return first;}
		T2 getSecond() const {return second;}
	
};

int main(){
	//Integer and Double combation
	Pair<int, double> myPair(10, 20.5);
	cout<< "First: " << myPair.getFirst() << endl; // Output: 10
	cout<< "Second: " << myPair.getSecond() << endl; // Output: 20.5

	Pair<string, int> person("Alice", 30);
	cout<< "Name: " <<person.getFirst() << ", Age: " << person.getSecond() << endl;
	return 0;
	
	
}
