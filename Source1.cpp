//In this program, i will create a function that will return the highest value in a given array.

#include <iostream>
#include <cstdlib>
#include <time.h>

using namespace std;

const int RAND_OPTIONS = 25;
const int ARRAY_SIZE = 10;

int highest(int[], int);

int main()
{
	int array[ARRAY_SIZE];
	int max;

	srand(time(NULL));

	for (int i = 0; i < ARRAY_SIZE; i++)
	{
		array[i] = rand() % (RAND_OPTIONS + 1);
	}

	max = highest(array, ARRAY_SIZE - 1);
	cout << "In this array, the cell with the highest value is cell number " << max << endl;
}

int highest(int arr[], int size)
{
	int high = -1;
	int HighCell = -1;
	for (int i = 0; i < size; i++)
	{
		if (arr[i] > high)
		{
			high = arr[i];
			HighCell = i;
		}
	}
	return (HighCell);
}