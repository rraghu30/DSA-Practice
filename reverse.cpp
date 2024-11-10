#include<iostream>
using namespace std;

void reverse(int arr[], int n)
{
    int start = 0;
    int end = n-1;

    while(start<=end)
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

void printArray(int arr[], int n)
{
    for(int i = 0; i<n; i++)
    {
        cout<< arr[i] <<" ";
    }
    cout<<endl;
}

int main()
{
    int arr[6] = {4, 6, -8, 3, 9, 0};
    int brr[7] = {5, 7, 9, 2, -5, 2, 8};

    reverse(arr, 6);
    reverse(brr, 7);

    printArray(arr, 6);
    printArray(brr, 7);


    return 0;
}