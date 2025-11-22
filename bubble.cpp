#include <iostream>
using namespace std;

void sorted(int arr[], int n){


    for (int i = 0; i < n - 1; i++) {
        cout << "Pass " << i + 1 << ": ";
        for (int j = 0; j < n - 1 - i; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
        for (int k = 0; k < n; k++) {
            cout << arr[k] << " ";
        }
        cout << endl;
    }

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
}

int main() {
    int size;
    cout << "Enter number of elements: ";
    cin >> size;
    int arr[100];
    
       cout << "Enter " << size << " elements: ";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }
    sorted(arr,size);
    return 0;
}
