/*
	Name: Test Score Dynamic Array
	Copyright: 2023
	Author: Daniela Valerio
	Date: April 2nd, 2023
	Description: get user input for test scores and store them in a dynamic array. 
                Calculate the average score and sort them in ascending order>
*/

#include <iostream>
#include <iomanip> 
using namespace std; 

void getInputSize(int* size);
int* getTestScores(int size);
void sortArray(int* array, int size);
void displayArray(int* array, int);
int getAverage(int* array, int size);


// Main test driver
int main()
{
    int arraySize;
    int* arrayOfScores;
    getInputSize(&arraySize);
    arrayOfScores = getTestScores(arraySize);
    cout << "Your scores are:\n" ;
    for (int i = 0; i < arraySize; i++){
        cout << arrayOfScores[i] << endl;
    }
    int average = getAverage(arrayOfScores, arraySize);

    sortArray(arrayOfScores, arraySize);
    cout << "Test scores arranged in ascending order: " << endl;
    displayArray(arrayOfScores, arraySize);
    cout << "The average of the test scores is: " << average << endl;
    // delete the dynamic array
    delete [] arrayOfScores;
    return 0;
}
// get the size of the array
void getInputSize(int* size)
{
    cout << "Enter how many test scores you have: ";
    cin >> *size;
}

// get each test score
int* getTestScores(int size)
{
    int* arrayPtr;
    arrayPtr = new int[size];
    for(int i = 0; i < size; i++)
    {
        cout << "Enter test score " << i + 1 << ": ";
        cin >> *(arrayPtr + i);
        // Input Validation: Do not accept negative numbers for test scores. 
        while (arrayPtr[i] < 0)
        {
        cout << "Zero or negative numbers not accepted.\n";
        cout << "Enter test score " << (i + 1) << ": ";
        cin >> arrayPtr[i];
        }
    
    }
    cout << endl;
    return arrayPtr;
}
// display the array
void displayArray(int* array, int elems){
    for (int count = 0; count < elems; count++)
        cout << array[count] << endl;  
        cout << endl;
}

// arrange the array in ascending order and return the array
void sortArray(int* array, int size){
    int search;
    int minIndex;
    int minVal;
    for (search = 0; search < (size - 1); search++)
    {
        minIndex = search;
        minVal = array[search];
        for (int i = search + 1; i < size; i++)
        {
            if (array[i] < minVal)
            {
                minVal = array[i];
                minIndex = i;
            }
        }
        array[minIndex] = array[search];
        array[search] = minVal;
    }
}

// get sum of all values in the array and return the sum divided by the size of the array
int getAverage(int* array, int size)
{
     int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += *(array + i);
    }  
    return sum / size;
}

