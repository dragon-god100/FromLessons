#include <iostream>
#include <vector>
#include <string>

using namespace std;

typedef struct{
    string name;
    int salary;
} Worker;

/*
typedef struct {
    int length;
    Worker* worker;
} Workers;


void addElements(Workers & workers, Workers * valuesToAdd, int numberOfValuesToAdd) {
    // Allocate new memory
    Workers * newWorkers = new Workers[workers.length + numberOfValuesToAdd];

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

void addElement(AwesomeArray & arr, int valueToAdd) {
    int newarr[1] = {valueToAdd};
    addElements(arr,  newarr , 1);
}

void deleteElement(AwesomeArray & arr, int indexToDelete) {
    for(int i = indexToDelete; i < arr.length; i++){
        arr.arr[i] = arr.arr[i + 1];
    }
    arr.length--;

}

int Find(AwesomeArray & arr , int FindValue){
    for(int i = 0; i < arr.length; i++) {
        if (arr.arr[i] == FindValue) return i;
    }
    return -1;
}

AwesomeArray findAll(AwesomeArray & arr, int value) {
    AwesomeArray result;
    result.arr = new int[0];
    result.length = 0;

    for(int i = 0; i < arr.length; i++) {
        if (arr.arr[i] == value) addElement(result, i);
    }

    return result;
}

void deleteByValue(AwesomeArray & arr, int valueToDelete) {
    int indexTodelete = Find(arr, valueToDelete);
    while(indexTodelete != -1) {
        deleteElement(arr, indexTodelete);
        indexTodelete = Find(arr, valueToDelete);
    }
}
*/
int main()
{
    vector<Worker> workers();

    // Size of worker
    workers.size();
    // Add element to workers
    Worker a;
    a.name = "Sasha";
    a.salary = 1000000;
    workers.push_back(a); // Increases size by one
    // Erase index
    workers.erase(5);
    // Call element
    workers[5];
    // Iterate through workers
    for(int i = 0; i < workers.size(); i++) {
        cout << "Enter name";
        cin >> workers[i].name;
    }

    cout << "Hello world!" << endl;
    return 0;
}
