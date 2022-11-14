#include <iostream>
#include <math.h>
using namespace std;

void cicle(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main(void) {
    /*int n = 12;
    int *arr = new int[n];
    int temp;
    for (int i = 0; i < n; i++) {
        cout << "Enter " << i + 1 << " number: ";
        cin >> arr[i];
    }
    cout << "Unsorted array: ";
    cicle(arr, n);
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    cout << "Increase array: ";
    cicle(arr, n);
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] < arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    cout << "Decrease array: ";
    cicle(arr, n);*/





    int n;
    cout << "Enter the array size: ";
    cin >> n;
    int *arr = new int[n];
    int max = INT_MIN;
    int k = 0;
    for (int i = 0; i < n; i++) {
        cout << "Enter " << i + 1 << " number: ";
        cin >> arr[i];
    }
    cout << "Unchanged array: ";
    cicle(arr, n);
    for (int i = 0; i < n; i++) if (arr[i] > max) {
        max = arr[i];
        k = i;
    }

    for (int i = 0; i != k; i++)  if (arr[i] < 0) arr[i] = 0;
    cout << "Array with zero: ";
    cicle(arr, n);

}