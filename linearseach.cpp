#include<iostream>
using namespace std;
 
 bool search(int arr[], int size, int key)
 {
    for(int i =0; i <= size; i++ )
    {
        if(arr[i] == key)
        {
            return 1;
        }
    }
      return 0;
 }

int main()
{  

    int  arr[10] = {1, 4, 6, 8, 23, 17, 9, 0, 3, -2};
    cout<<"Element is to be search for :"<<endl;
    int key;  
    cin>>key;

    bool found = search(arr, 10, key);

    if (found)
    {
        cout<<"key is to be found :"<<endl;
    }
    else
    {
        cout<<"key is not found :"<<endl;
    }
    return 0;
}