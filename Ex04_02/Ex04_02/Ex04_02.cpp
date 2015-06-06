//Colin Bondy
//Ex04_02

#include <iostream>

using namespace std;

int* doubleCapacity(const int* list, int size);
int * alloc_array(int size);

int main()
{
	const int size = 5;
	int list[size] = { 5, 4, 4, 3, 10 };
	int* newlist;

	int newSize = (size * 2);
	newlist = doubleCapacity(list, newSize);

	cout << "Your array of " << size << " has been doubled\n";
	
	cout << "Please fill the rest of the array\n";

	for (int i = size; i < newSize; i++)
	{
		cout << "Enter value " << i + 1 << endl;
		cin >> newlist[i];

	}

	cout << endl;

	for (int i = 0; i < newSize; i++)
	{
		cout << "Value" << i+1 << " = ";
		cout << newlist[i] << endl;

	}
}

int* doubleCapacity(const int* list, int size)
{
	// Allocate array
	int* pintarray = new int[size];

	// Initialize array
	for (int i = 0; i < size; i++)
		pintarray[i] = list[i];

	// return array pointer
	return pintarray;


}
