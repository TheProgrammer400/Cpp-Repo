#include<iostream>
#include<fstream>
using namespace std;

/*
The useful classes for working with files in C++ are:
	1. fstreambase
	2. ifstream --> derived from fstreambase
	3. ofstream --> derived from fstreambase

There are 2 ways to open a file:
	1. using the constructor
	2. using the member function open() of the class
*/

int main(){
	// opening files using constructor and writing it
	ofstream out("sample.txt"); // created a object 'out' of class ofstream 
	out<<"hello world";
	out.close();
	/* if you don't close the file then, while printing content of the file using
	ifstream class, it only prints a new line character. That means that 
	without closing a file, it is not flushed properly */

	string str1, str2;

	// opening files using constructor and reading it
	ifstream in("sample.txt"); // created a object 'in' of class ifstream
	in>>str1; // only reads a word, can't read anything after whitespace or '\n'	
	cout<<str1<<endl;
	getline(in, str2);
	cout<<str2<<endl;

	/* If i write both 'in>>str1' and getline(in, str2), you observe
	that the output is :
	hello
	 world

	this is because, 'in>>str1' reads the file till white space is encounterd
	and 'getline(in, str2)' starts to read the file from the exact position
	where 'in>>str1' left.
	
	'getline' read only one line, so for reading two lines from file,
	you need to write 'getline' method two times */

	return 0;
}