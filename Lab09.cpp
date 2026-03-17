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
	int nameCount = 0;
	string first = "z", last = "A", name, fileName;
	ifstream inFile;

	//greet user
	cout << "Hello this program reads names from your file" << endl;
	cout << "It will tell you the alphabetical first and last name" << endl;
	cout << "And how many names there are." << endl << endl;

	//get file name
	cout << "Input File Name (Include .txt suffix): ";
	cin >> fileName;
	inFile.open(fileName);

	//validation for file validation
	while (!inFile)
	{
		//get file name
		cout << "Invalid file name!" << endl;
		cout << "FileName: ";
		cin >> fileName;
		inFile.open(fileName);
	}

	//loop to read names.
	while (getline(inFile, name))
	{
		//get name
		//getline(inFile, name);

		if (name < first)
			first = name;
		else if (name > last)
			last = name;
		
		//increase nameCount
		nameCount++;
	}
	
	//output processed data
	cout << first << " comes first" << endl;
	cout << last << " comes last" << endl;
	cout << "There are " << nameCount << " names in the file" << endl;

	return 0;
}

