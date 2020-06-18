#include <iostream>
#include "include/arrayBitch.h"
#include "include/Node.h"
using namespace std;

int main()

{
    int choice;
    cout << " print 1 to use linked list . print 2 to use array functions" << endl;
    cin >> choice;
    if (choice == 1)
    {
        Node *head = nullptr;
        int length;
        int value;
        cout << " print number of values that you want: " << endl;
        cin >> length;

        for (int i = 0; i < length; i++)
        {
            cout << "print values :" << i << endl;
            cin >> value;
            head->push(&head, value);
        }

        head->printLinkedList();
        while (true)
        {
            int command;

            cout << "enter command that you want(0 - add value, 1 - remove value , 2 - sort, 3 - exit ): ";
            cin >> command;

            if (command == 4)
                break;

            if (command > 4)
            {
                cout << "worng command . try again: " << endl;
                continue;
            }

            if (command == 0)
            {
                int numValues;
                cout << "enter number of values that you wont to add:";
                cin >> numValues;
                cout << endl;
                head->push(&head, numValues);
            }

            else if (command == 1)
            {
                int removeValue;
                cout << "enter number that you wont delete: ";
                cin >> removeValue;
                head->removeElement(removeValue);
            }
            else if (command == 2)
            {
                head->sortLinkedList();
            }

            else if (command == 3)
            {
                break;
            }
            head->printLinkedList();
            cout << endl;
        }
    }
    else if (choice == 2)
    {
        arrayBitch arr;
        cout << "Enter the size of array: ";
        cin >> arr.length;
        arr.arr = new int[arr.length];

        for (int i = 0; i < arr.length; i++)
        {
            cout << "Enter number" << i + 1 << ": ";
            cin >> arr.arr[i];
        }
        cout << "thats all the numbers in the array: " << endl;

        for (int i = 0; i < arr.length; i++)
        {
            cout << arr.arr[i];
            if (i == arr.length - 1)
            {
                cout << "." << endl;
            }
            else
                cout << ",";
        }

        while (true)
        {
            int command;

            cout << "enter command that you want(0 - add values, 1 - add one value , 2 - delete element, 3 - find index of value , 4 -  print, 5 - Find all, bubble sort - 6, 7 - exit): ";
            cin >> command;

            if (command == 7)
                break;

            if (command > 7)
            {
                cout << "worng command . try again: " << endl;
                continue;
            }

            if (command == 0)
            {
                int numberOfValues = 0;
                cout << "Enter number of values to add: ";
                cin >> numberOfValues;
                int valuesToAdd[numberOfValues];

                for (int i = 0; i < numberOfValues; i++)
                {
                    cout << "Enter number: ";
                    cin >> valuesToAdd[i];
                }

                arr.addElements(arr, valuesToAdd, numberOfValues);
            }
            else if (command == 1)
            {
                int valueToAdd;
                cout << "Enter value: ";
                cin >> valueToAdd;
                arr.addElement(arr, valueToAdd);
            }
            else if (command == 2)
            {
                int index;
                cout << "Enter index to delete: ";
                cin >> index;
                arr.deleteElement(arr, index);
            }
            else if (command == 3)
            {
                int toFind;
                cout << "Enter number to find: ";
                cin >> toFind;
                cout << "Value index at " << arr.Find(arr, toFind) << endl;
            }
            else if (command == 4)
            {
                for (int i = 0; i < arr.length; i++)
                {
                    cout << arr.arr[i] << " ";
                }
                cout << endl;
            }
            else if (command == 5)
            {
                int tofind;
                cout << "enter number that you want to find: ";
                cin >> tofind;

                arrayBitch indicies = arr.findAll(arr, tofind);

                if (indicies.length == 0)
                {
                    cout << "Not found";
                    continue;
                }

                cout << "Indicies of values: ";
                for (int i = 0; i < indicies.length; i++)
                {
                    cout << indicies.arr[i] << " ";
                }
                cout << endl;
            }
            else if (command == 6)
            {
                arr.BubbleSort(arr.arr, arr.length);
            }
        }
    }
}
