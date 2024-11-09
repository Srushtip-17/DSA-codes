#include <iostream>
using namespace std;

void rotateArray(int arr[], int size, int k) 
{
    int temp[size];
    for (int i = 0; i < size; i++) 
	{
        temp[i] = arr[(i + k) % size];
    }

    for (int i = 0; i < size; i++)
	{
        arr[i] = temp[i];
    }
}

int main() 
{
    int size, k;

    cout << "Enter size of array: ";
    cin >> size;

    int arr[size];

    for (int i = 0; i < size; i++) 
	{
        cout << "Enter element " << i << ": ";
        cin >> arr[i];
    }

    cout << "Enter the number of positions to rotate: ";
    cin >> k;

    rotateArray(arr, size, k+1);

    cout << "Rotated array: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}

