//This is a program for reading a file for names and analyzing the names
//Daniel Parker 03/17/2026

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

//Main function read file, report name analysis
int main()
{
	//variable creation
	int nameCount;
	string first, last, name, fileName;
	ifstream inFile;

	//greet user
	cout << "Hello this program reads names from your file" << endl;
	cout << "and tells you alphabetical first, last, and name count";

	//get file name
	cout << "FileName: ";
	cin >> fileName;
	inFile.open(fileName);

	//validation for file validation
	while (inFile.fail())
	{
		//get file name
		cout << "FileName: ";
		cin >> fileName;
		inFile.open(fileName);
	}

	//loop to read names.
	while ()
	{
		//get name
		inFile >> name;

		if (name > first)
			first = name;
		else if (name < last)
			last = name;
		
		//increase nameCount
		nameCount++;
	}
	
	//output processed data

}

