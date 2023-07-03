/*
	Name: LargerThanN
	Copyright: 2023
	Author: Daniela Valerio
	Date: 3/14/2023
	Description: This program will create an array, and print out values from the array
    that are bigger than n.
*/

#include <iostream>
using namespace std;

const int size = 12;
int n;
void srchArray(int [], const int size, int n);

// Main test driver
int main(int argc, char const *argv[])
{
    n = 20;
    int array[] = {35, 10, 6, 42, 44, 8, 9, 20, 38, 14, 48, 11};
    cout << "The values greater than " << n << " are: " << endl;
    srchArray(array, size, n);
    
    return 0;
}

//Function outputs numbers bigger than 20 or n.
void srchArray(int array[], const int size, int n){
    for (int i = 0; i < size; i++)
    {
        if (array[i] > n)
        {
            if (i == size -1)
                cout << array[i];
            else
                cout << array[i] << " ";
        }

    }
}
       
       
        