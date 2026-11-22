
#include <iostream>
using namespace std;

template <class T>
void sortArray(T arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                T temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

template <class T>
void display(T arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int a[] = {20, 5, 15, 10, 25};
    float b[] = {4.5, 2.1, 8.3, 1.2};

    int n = 5;
    int m = 4;

    sortArray(a, n);
    sortArray(b, m);

    cout << "Sorted Integer Array:" << endl;
    display(a, n);

    cout << "Sorted Float Array:" << endl;
    display(b, m);

    return 0;
}
