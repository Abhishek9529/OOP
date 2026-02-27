#include <iostream>
using namespace std;

class Adder{
	public:
		Adder(int i =0){
			total = i;
		}
		
		//interface for outside world
		void addNum(int number){
			total += number;
		}
		
		int getTotal(){
			return total;
		}
		
	private:
		//hidden from the outside world 
		int total;
};

int main(){
	Adder a;
	a.addNum(10);
	a.addNum(30);
	a.addNum(70);
	
	cout<<"Total " <<a.getTotal()<< endl;
	return 0;
}
