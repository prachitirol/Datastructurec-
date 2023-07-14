#include <iostream>

int main() {
    int numbers[] = {10, 5, 20, 8, 15}; // Sample array
    int size = sizeof(numbers)/sizeof(numbers[0]); // Calculating the size of the array

    int largest = numbers[0]; // Assume the first element is the largest

    for (int i = 1; i < size; i++) {
        if (numbers[i] > largest) {
            largest = numbers[i]; // Update largest if a larger element is found
        }
    }

    std::cout << "The largest element in the array is: " << largest << std::endl;

    return 0;
}
