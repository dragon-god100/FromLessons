#include <iostream>

int main() {
    int size;

    std::cout << "Enter size: ";
    std::cin >> size;

    int arr[size];

    for(int i = 0; i < size; i++) {
        std::cout << "Enter number " << i << ": ";
        std::cin >> arr[i];
    }

    for(int i = 0; i < size; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    int num;
    std::cout << "Enter number of skips: ";
    std::cin >> num;

    if(num > 0) {
        for (int i = num; i < size; i += num) {
            std::cout << arr[i] << " ";
        }
        std::cout << std::endl;
    }
    else {
        std::cout << "Error! Cannot proceed with 0 or less!" << std::endl;
    }

    for(int j = 0; j < size - 1; j++) {
        // Find minimum
        int result = j;
        for (int i = j + 1; i < size; i++) {
            if (arr[result] > arr[i]) {
                result = i;
            }
        }

        // Put at start
        int temp = arr[j];
        arr[j] = arr[result];
        arr[result] = temp;
    }


    for(int i = 0; i < size; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
