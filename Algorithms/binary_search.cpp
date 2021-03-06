#include <iostream>
using namespace std;

#define TRUE 0
#define FALSE 1

int main(void)
{
    int array[10] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
    int left = 0;
    int right = 10;
    int middle = 0;
    int number = 0;
    int bsearch = FALSE;
    int i = 0;

    cout << "Massiv: ";
    for (i = 0; i < 10; i++)
        cout << array[10] << " ";

    cout << "\nSearch a number: ";
    cin >> number;

    while (bsearch == FALSE && left <= right) {
        middle = (left + right) / 2;
        if (number == array[middle]) {
            bsearch = TRUE;
            cout << "** Find! ** \n";
        }
        else {
            if (number < array[middle]) right = middle - 1;
            if (number > array[middle]) left = middle + 1;
        }
    }

    if (bsearch == FALSE)
        cout << "-- Not FIND -- \n";

    return 0;
}

