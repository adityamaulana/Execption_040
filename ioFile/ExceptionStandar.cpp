#include <iostream>
#include <array>
#include <exception>

using namespace std;

int main()
	{
		cout << "First Program" << endl; // Tag 1:...
		try
		{
			array<int, 3> data = {1, 2, 3};
			//Array Messagge with 3 int element
			//cout <<data.at(5) << endl;
			//Calling 5 element Array
		}
		catch (exception& e)
		{
			//Catch using Object Exception
			cout << e.what() << endl;
			/*This will be execute because Data Array only have 3 element*/
		}
		cout <<"Last Tag Line" << endl;
		/* Tag 2, Program will work and wont stop even there's an error*/

		return 0;
	}