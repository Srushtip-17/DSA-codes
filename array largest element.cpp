#include <iostream>
using namespace std;

int main()
{
	int size;
    cout << "Enter size of an array: ";
    cin >> size;
    int no[size];
    for (int k = 0; k < size; k++) 
	{
        cout << "Enter element " << k << ": ";
        cin >> no[k];
    }
    for (int i = 0; i < size - 1; i++) 
	{
        for (int j = 0; j < size - i - 1; j++) 
		{
            if (no[j] > no[j + 1])
			{
                int temp = no[j];
                no[j] = no[j + 1];
                no[j + 1] = temp;
            }
        }
    }
    cout << "Sorted array is: ";
    for (int l = 0; l < size; l++) 
	{
        cout << no[l] << " ";
    }
    cout << endl;
    cout << "The largest element is: " << no[size - 1] << endl;

    return 0;
}

