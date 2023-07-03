/*/*
	Word Counter
	Name: Daniela Valerio
	Date: 10/21/2022
	
*/

#include <iostream>
#include <string>
using namespace std;

void selectionSort(string[], int);
void displayArray(string[], int);

//Main test driver
int main()
{
    const int NUM_NAMES = 20;
	string names[NUM_NAMES] = {
		"Collins, Bill", "Smith, Bart", "Allen, Jim",
		"Griffin, Jim", "Stamey, Marty", "Rose, Geri",
		"Taylor, Terri", "Johnson, Jill", "Allison, Jeff",
		"Looney, Joe", "Wolfe, Bill", "James, Jean",
		"Weaver, Jim", "Pore, Bob", "Rutherford, Greg",
		"Javens, Renee", "Harrison, Rose", "Setzer, Cathy",
		"Pike, Gordon", "Holland, Beth"
	};

	// Display array before and after sorting
    cout << "Names before selection sort is performed: " << endl;
    displayArray(names, NUM_NAMES);

    selectionSort(names, NUM_NAMES);
    cout << "Names after selection sort is performed: " << endl;
    displayArray(names, NUM_NAMES);

	return 0;
}

// function to display the array
void displayArray(string array[], int elems){
    for (int count = 0; count < elems; count++)
        cout << array[count] << endl;  
        cout << endl;
}

// search the array for the string starting form a, and arrange the array in ascending order and return the array
void selectionSort(string array[], int elems)
{
    int search;
    int minCount;
    string minVal;
    for (search = 0; search < (elems - 1); search++)
    {
        minCount = search;
        minVal = array[search];
        for (int index = search + 1; index < elems; index++)
        {
            if (array[index] < minVal)
            {
                minVal = array[index];
                minCount = index;
            }

        }
    array[minCount] = array[search];
    array[search] = minVal;
    }
    cout << endl;
}

