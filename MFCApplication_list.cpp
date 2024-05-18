#include <iostream>
#include "mathFunc.h"


int findMax(int arr[], int size)
{
    int max = arr[0];
    for (int i = 1; i < size; i++)
    {
        if (arr[i] > max) {
            max = arr[i];
        }
    } return max;
}


int main()
{
   
    std::cout << "Hello World!\n";
}


