#include <iostream>
#include <cstring>
using namespace std;

#define MAXARRAY 10

void quicksort(int arr[], int low, int high);

int main(void)
{
	int array[MAXARRAY] = { 0 };
	int i = 0;

	for (i = 0; i < MAXARRAY; i++)
		array[i] = rand() % 100;

	cout << "Before sort: ";
	for (i = 0; i < MAXARRAY; i++) {
		cout << array[i] << " ";
	}
	cout << endl;

	quicksort(array, 0, (MAXARRAY - 1));

	cout << "After: ";
	for (i = 0; i < MAXARRAY; i++) {
		cout << array[i] << " ";
	}
	cout << endl;

	return 0;
}

void quicksort(int arr[], int low, int high) {
	int i = low;
	int j = high;
	int y = 0;

	int z = arr[(low + high) / 2];

	do {
		while (arr[i] < z) i++;
		while (arr[j] > z) j--;
		if (i <= j) {
			y = arr[i];
			arr[i] = arr[j];
			arr[j] = y;
			i++;
			j--;
		}
	} while (i <= j);

	if (low < j)
		quicksort(arr, low, j);

	if (i < high)
		quicksort(arr, i, high);

}


