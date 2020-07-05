#include "Worker.h"
#include "Client.h"
using namespace std;



void addElements(ManageClient & arr, Client * valuesToAdd, int numberOfValuesToAdd) {
    // Allocate new memory
   Client * newarr = new Client[arr.length + numberOfValuesToAdd];

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

void addElement(ManageClient & arr, Client valueToAdd) {
    Client newarr[1] = {valueToAdd};
    addElements(arr,  newarr , 1);
}

void deleteElement(ManageClient & arr, int indexToDelete) {
    for(int i = indexToDelete; i < arr.length; i++){
        arr.arr[i] = arr.arr[i + 1];
    }
    arr.length--;

}

int Find(ManageClient & arr , int FindValue){
    for(int i = 0; i < arr.length; i++) {
        if (arr.arr[i] == FindValue) return i;
    }
    return -1;
}
