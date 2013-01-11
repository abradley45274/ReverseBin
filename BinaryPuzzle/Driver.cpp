/*
Author: Ashton Junior Ceasar Bradley
Date: 1/10/2012
Description: Converts numbers to binary , prints the regular order , reversed order of the binary ,prints the number of the reversed order binary.


*/
#include<iostream>
#include<string>
#include<vector>
#include<iterator>
#include <math.h>
using namespace std;

/*
postCondition:number has to be an integer 
PreCondition:Returns a vector that holds the binary to number
Purpose: Converts numbers to binary , prints the regular order , reversed order of the binary ,prints the number of the reversed order binary.

*/
vector<int> convert_to_binary(int number)
{
	int total = 0;
	int n = number;
	int rn = 0;
	vector<int> bin = vector<int>();

	/* converts to binary  */
	while(number > 0)
    {
        total = number % 2;
        number /= 2;
		bin.push_back(total);
    } 

	cout << "Number:" << n << endl;
	cout << "Normal Binary:";

	/* Prints binary in regular order */
 for(vector<int>::reverse_iterator trav = bin.rbegin(); trav != bin.rend(); ++trav)
	{
		cout << *trav;
	}

	cout << endl;
	
	/* Finds the number of the reverse binary */
	int size = bin.size();
	for ( int t = 0; t < bin.size(); t++)
	{
		if(bin[t] == 1)
		{
			int exp =( bin.size()-1)-t;
			rn += pow(2,exp);

		}



	}





	cout << "Reversed Number:" << rn << endl;
	cout << "Reversed Binary:";
	/* Prints binary in reverse order*/
	for(vector<int>::iterator trav = bin.begin(); trav != bin.end(); ++trav)
	{
		cout << *trav;
	}

	cout << endl;

	return bin;
}


int main(int argc, char* argv[])
{

	vector<int> num = vector<int>();
	/* Driver Test */
	num = convert_to_binary(13);
	num = convert_to_binary(47);





system("PAUSE");
return 0;
}