#include "../include/arrayBitch.h"
#include <iostream>
using namespace std;


void arrayBitch::BubbleSort(int* arr, int arr_size) {
    for(int i = 0; i < arr_size - 1; i++) {
        for(int j = 0; j < arr_size - i - 1; j++) {
            if(arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

void  arrayBitch::addElements(arrayBitch & arr, int * valuesToAdd, int numberOfValuesToAdd) {
    // Allocate new memory
    int * newarr = new int[arr.length + numberOfValuesToAdd];

    // Copy previous array values to new array
    for(int i = 0; i < arr.length; i++){
        newarr[i] = arr.arr[i];
    }

    // add new elements to new array
    for(int i = 0; i < numberOfValuesToAdd; i++){
        newarr[arr.length + i] = valuesToAdd[i];
    }

    delete arr.arr;
    arr.arr = newarr;
    arr.length += numberOfValuesToAdd;
}

void arrayBitch::addElement(arrayBitch & arr, int valueToAdd) {
    int newarr[1] = {valueToAdd};
    addElements(arr,  newarr , 1);
}

void arrayBitch::deleteElement(arrayBitch & arr, int indexToDelete) {
    for(int i = indexToDelete; i < arr.length; i++){
        arr.arr[i] = arr.arr[i + 1];
    }
    arr.length--;

}

int  arrayBitch::Find(arrayBitch & arr , int FindValue){
    for(int i = 0; i < arr.length; i++) {
        if (arr.arr[i] == FindValue) return i;
    }
    return -1;
}

arrayBitch arrayBitch::findAll(arrayBitch & arr, int value) {
    arrayBitch result;
    result.arr = new int[0];
    result.length = 0;

    for(int i = 0; i < arr.length; i++) {
        if (arr.arr[i] == value) addElement(result, i);
    }

    return result;
}

void arrayBitch::deleteByValue(arrayBitch & arr, int valueToDelete) {
    int indexTodelete = Find(arr, valueToDelete);
    while(indexTodelete != -1) {
        deleteElement(arr, indexTodelete);
        indexTodelete = Find(arr, valueToDelete);
    }
}
