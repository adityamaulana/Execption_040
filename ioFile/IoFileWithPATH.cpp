#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
	string Line;
	string Filename;

	cout << "Input file name : ";
	cin >> Filename;

	//Opening file on write mode
	ofstream outfile;

	//point on a file
	outfile.open(Filename, ios::out);

	cout << ">= Writing file, \'Q' for exit" << endl;

	//Unlimited loop for writing
	while (true)
	{
		cout << " - ";
		
		//getting every character in one line
		getline(cin, Line);
		
		//Loop will stop when you input "Q" Character
		if(Line == "Q") break;

		//Write and input grade from "Line" to the file
		outfile << Line << endl;
	}

	//end from writing now closing file
	outfile.close();

	//Opening file on read mode
	ifstream infile;

	//Point on a file
	infile.open(Filename,ios::in);

	cout << endl << ">= Open and read file " << endl;
	
	//if there's a file
	if (infile.is_open())
	{
		//Looping every line
	}
}