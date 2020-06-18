#ifndef ARRAYBITCH_H
#define ARRAYBITCH_H
#include "arrayBitch.h"

class arrayBitch
{
     public:

        int* arr;
        int length;

     void BubbleSort(int* arr, int arr_size);
     void addElements(arrayBitch & arr, int * valuesToAdd, int numberOfValuesToAdd);
     void addElement(arrayBitch & arr, int valueToAdd);
     void deleteElement(arrayBitch & arr, int indexToDelete);
     int Find(arrayBitch & arr , int FindValue);
     arrayBitch findAll(arrayBitch & arr, int value);
     void deleteByValue(arrayBitch & arr, int valueToDelete);

     private:
};

#endif // ARRAYBITCH_H
