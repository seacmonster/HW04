//HW04-01
//Colin Bondy

#include <iostream>

using namespace std;

int main()
{
	int *x;

	cout << "How many numbers would you like to average?\n";
	int count;
	cin >> count;

	x = new int[count];

	for (int i = 0; i < count; i++)
	{
		cout << "please enter integer " << i + 1 << endl;
		cin >> x[i];

	}

	int sum = 0, average = 0;

	for (int i = 0; i < count; i++)
	{
		sum += x[i];
	}

	average = sum / count;

	int aboveAverage = 0;

	for (int i = 0; i < count; i++)
	{
		if (x[i] > average)
			aboveAverage++;

	}

	cout << "There are " << aboveAverage << " number(s) above the average of " << average << endl;


	delete[] x;
}