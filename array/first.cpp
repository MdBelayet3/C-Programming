#include<iostream>
using namespace std;
int main()
{
    int size;
    cout<<"enter the size of the array";
    cin>>size;
    int myarray [size];
    cout<<"enter"<<size<<"elements"<<endl;
    for(int i=0; i < size; ++ )
    {
        cout<<"element"<<i+1<<":";
        cin>>myarray[i];
    }
    cout<<"the elements in the array are:"<<endl;
    for(int =0; i<size; ++)
    {
        cout<<myarray[i]<<"";

    }
    cout <<endl;
    return 0;
}
