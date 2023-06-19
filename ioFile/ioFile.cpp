#include <fstream>
#include <iostream>
#include <string>

using namespace std;

int main()
{
	string Baris;

	//open file on write mode

	ofstream outfile;

	//point on filename

	outfile.open("Fileexample.txt");

	cout << ">= Writing file, \'q' for exit" << endl;

	//unlimited loop for writing

	while (true)
	{
		cout << "- ";

		//getting character in one line

		getline(cin, Baris);
		//loop will stop when you input a "Q" character

		if(Baris == "q") break;
		//write and input grade from 'line' to the file
		outfile << Baris << endl;
	}
	//end from writing and now close the file
	outfile.close();

	//Opening file on writing mode
	ifstream infile;
	//point on a file
	infile.open("fileexample.txt");

	cout << endl << "> Open and read file" << endl;
	//if there's a file, then
	if (infile.is_open())
	{
		//looping every line
		while (getline(infile, Baris))
		{
			//and show it here
			cout << Baris << '\n';
		}

		//closing file and done
		infile.close();
	}

	//if file cannot be found, this will appear
	else cout << "Unable to open file";

	return 0;
}