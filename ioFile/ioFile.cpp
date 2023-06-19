#include <fstream>
#include <iostream>

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
	}
}