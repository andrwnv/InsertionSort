#include <stdio.h>

void insertionSort(int* array, unsigned arraySize)
{
    for (unsigned i = 1; i < arraySize; ++i)
    {
        int temp = *(array + i);
        unsigned j = i;

        while( temp > *(array + j - 1) && (j > 0) )
        {
            *(array + j) = *(array + j - 1);
            --j;
        }

        *(array + j) = temp;
    }
}

int main()
{
    int array[] = { 12, 45, 11, 0, -1, 120, 3, -7, 8, -10 };
    insertionSort(array, 10);

    return 0;
}