#include <iostream>
using namespace std;
int *createOneNewElement(int *, const int);
void displayArray(int *, const int);

int main() 
{
    
    
    const int SIZE = 5;
    int numbers[SIZE] = { 2, 4, 6, 8, 10};

    int *oneElementAdded = createOneNewElement(numbers, SIZE);

    displayArray(numbers, SIZE);
    cout << endl;
    displayArray(oneElementAdded, (SIZE + 1));
    cout << endl;

    delete [] oneElementAdded;
    oneElementAdded = nullptr; 

    return 0;
    
    
    
}

int *createOneNewElement(int *array, const int SIZE)
{
    const int NewSIZE = SIZE + 1;
    int *newArray = new int[NewSIZE];
    
    for(int i = 0; i < NewSIZE; i++)
    {
        if (i == 0)
            *(newArray + i) = 20; 
        else 
            *(newArray + i) = array[i - 1];
    }
    // 20, 2, 4, 6, 8, 10

    return newArray;
}

void displayArray(int *array, const int SIZE)
{
    for (int i = 0; i < SIZE; i++)
        cout << *(array + i) << " "; // array[i]
}