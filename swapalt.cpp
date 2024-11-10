#include<iostream>
using namespace std;

void printArray(int arr[], int n)
{
    for(int i = 0; i<n; i++)
    {
        cout<< arr[i] <<" ";
    }
    cout<<endl;
}

void swapAlternate(int arr[], int size)
{
    for(int i = 0; i<size; i+=2 )
    {
        if(i+1 < size)
        {
            swap(arr[i], arr[i+1]);
        }
    }
}

int main()
{

   int even[8] = {5, 7, 8, 9, 3, 2, 4, 0};
   int odd[5] = {3, 8, 5, 4, 0};

   swapAlternate(even, 8);
   printArray(even, 8);

   cout <<endl;

   swapAlternate(odd, 5);
   printArray(odd, 5);

    return 0;
}