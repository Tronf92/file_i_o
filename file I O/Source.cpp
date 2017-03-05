#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
	string line;
	ifstream myfile("example.txt");
	cout<<"Hello";
	if(myfile.is_open())
	{
		while(getline(myfile,line) )
		{
			cout << line << endl;
		}
		myfile.close();
	}
	else
	{
		cout << "Unable to open file";
	}
	getchar();
	return 0;
}

