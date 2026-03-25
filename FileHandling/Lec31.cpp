#include <fstream>
using namespace std;
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
// int main(){
// 	std::ifstream myfile("example.txt");
// 	std::string line;
	
// 	if(myfile.is_open()){
// 		while(getline(myfile, line)){
// 			std::cout<< line <<'\n';
// 		}
// 		myfile.close();
// 	}
// 	return 0;
// }


// Program Checking if a File Exists 
//int main(){
//	ifstream file("example.txt");
//	
//	if(file){
//		cout<< "file exists.\n";
//	} else{
//		cout<< "File dose not exist.\n";
//	}
//	return 0;
//}

// Program Appending to a File
//int main(){
//	std::ofstream myfile;
//	myfile.open("example.txt", std::ios::app);
//	
//	if(myfile.is_open()){
//		myfile<< "Appended line. \n";
//		myfile.close();
//	}
//	return 0;
//}

//Lec 33 Program Multiplying Numbers  in file 
int main(){
	int num1, num2;
	
	ifstream inputFile("input.txt");
	if(inputFile.is_open()){
		inputFile>> num1 >> num2;
		inputFile.close();
	} else {
		cerr<<"Unable to open input file";
		return 1;
	}
	int result = num1 * num2;
	
	ofstream outputFile("output.txt");
	if(outputFile.is_open()){
		outputFile << result;
		outputFile.close();
	} else{
		cerr << "Unable to open file";
		return 1;
	}
	cout << "Result written to output.txt: " << result << endl;
	return 0;
}




