#include<iostream>
using namespace std;

int main()
{
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;
    int* myarray = new int[size]; // dynamically allocate memory for the array
    cout << "Enter " << size << " elements:" << endl;
    for(int i = 0; i < size; ++i) // fix the for loop syntax
    {
        cout << "Element " << i+1 << ": ";
        cin >> myarray[i];
    }
    cout << "The elements in the array are:" << endl;
    for(int i = 0; i < size; ++i) // fix the for loop syntax
    {
        cout << myarray[i] << " ";
    }
    cout << endl;
    delete[] myarray; // free the dynamically allocated memory
    return 0;
}
