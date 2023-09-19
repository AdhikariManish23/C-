#include <iostream>
using namespace std;

void bubbleSort(int arr[], int n) {
    for (int i = 0 ; i < n-1 ; i++) {
        bool swapped = false;

        for (int j = 0; j < n ; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }

        // If no two elements were swapped in the inner loop, the array is already sorted.
        if (swapped==false) {
            break;
        }
    }
}

int main() {
    int n;
    cout << "Enter the number of elements: "<<endl;
    cin >> n;

    int arr[n];

    cout << "Enter the elements: "<<endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    bubbleSort(arr, n);

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}