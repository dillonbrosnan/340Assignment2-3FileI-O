#include <iostream>
#include <string>
#include <stdio.h>
#include <ctype.h>
#include <string>
#include <vector>
#include <sstream>
#include <stdlib.h>
#include <cstdlib>
#include <iomanip>
#include <fstream>
using namespace std;

int main(){
	string x;
	vector <string> vect; //creates a vector of ints to hold all values from 6000+
	fstream file;
	file.open("file1.txt");
	file.clear();
	file.seekg(30000, file.beg); //24000 = 6000*5, may be 5 bytes for windows
									//check with grader
									//5 bits per number
	while(!file.eof()){
		file >> x;
		vect.push_back(x);
	}//starts pushing numbers from 6000th number in file to vector
	file.clear();
	file.seekg(30000, file.beg);
	for(int i = 7777; i < 7782; i++){
		file << i << "\n";//adds numbers to 6000th place 
	}
	for(int j = 0; j <vect.size() -1 ; j++){
		file << vect[j] << "\n";
	}//repopulates file with numbers (strings) in vector
	file.close();
	return 0;
}
