//Colin Bondy
//Ex04_03

#include <iostream>

using namespace std;

int smallestElement(int* list, int listsize);

int main()
{
	int numbers[] = { 1, 2, 4, 5, 10, 100, 2, -22 };
	int size = 8;
	int min;
	min = smallestElement(numbers, size);
	cout << "The smalles value = " << min << endl;
	
	
}


int smallestElement(int* list, int listsize)
{
	int min = 0;

	for (int i = 0; i < listsize; i++)
	{
		if (min > list[i])
			min = list[i];
	}

	return min;

}