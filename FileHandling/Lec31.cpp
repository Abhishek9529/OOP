#include <fstream>
// Program 1: Writing to a file in C++
//int main(){
//	std::ofstream myfile("example.txt");
//	if(myfile.is_open()){
//		myfile << "Writing!\n";
//		myfile << "Welcome to file handling !\n";
//		myfile.close();
//	}
//}

// Program 2: Reading from a file in C++
#include<iostream>
int main(){
	std::ifstream myfile("example.txt");
	std::string line;
	
	if(myfile.is_open()){
		while(getline(myfile, line)){
			std::cout<< line <<'\n';
		}
		myfile.close();
	}
	return 0;
}
