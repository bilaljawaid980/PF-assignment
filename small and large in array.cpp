#include <iostream>
using namespace std;
void findSmallestAndLargest(int arr[], int size) {
    int smallest = arr[0];
    int largest = arr[0];

    for (int i = 1; i < size; i++) {
        if (arr[i] < smallest) {
            smallest = arr[i];
        }
        if (arr[i] > largest) {
            largest = arr[i];
        }
    }

    cout << "Smallest number: " << smallest << endl;
    cout << "Largest number: " << largest << endl;
}

int main() {
    int arr[] = {5, 9, 3, 7, 0, 10};
    int size = sizeof(arr) / sizeof(arr[0]);

    findSmallestAndLargest(arr, size);

    return 0;
}

