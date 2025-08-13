#include <iostream>
using namespace std;
int main() {
    int arr[7] = {64, 34, 25, 12, 22, 11, 90};
    cout << "Original array: "<<endl;
    for (int i = 0; i < 7; i++) cout << arr[i] << " "<< endl;//n=7
    for (int i = 0; i < 6; i++) {  //n-1=6
        bool swapped = false; 
        for (int j = 0; j < 6-i; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }
        if (!swapped) break; 

    }

    cout << "Sorted array:   ";
    for (int i = 0; i < 7; i++) cout << arr[i] << " "<< endl;
     return 0;
}

