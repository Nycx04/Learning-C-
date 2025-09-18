#include <iostream> 
using namespace std;
int main () {

int n;

cout << "enter the number of elements: ";
cin >> n;

int* arr = new int [n];
cout << "enter " << n << " numbers: ";
for (int i =0; i < n; i++) {
    cin >> arr[i]; 
}
cout << "dynamic array elements: ";
for (int i = 0; i < n; i++) {
    cout << arr[i] << " "; 
}
 delete [] arr;
    return 0;
}