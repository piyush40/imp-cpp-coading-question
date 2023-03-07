
// binary search only applicable on the monotonic function like (increasing or decreasing function)


#include<bits/stdc++.h>
using namespace std;
int binarySearch(int arr[], int n, int key)
{
    int start =0;
    int end = n-1;
    int mid = (start + end)/2;
    while(start <= end)
    {
        if(arr[mid] == key)
        {
            return mid;
        }
        if(key > arr[mid])
        {
            start  = mid+1;
        }
        else
        {
            end = mid -1;
        }
        mid = (start + end)/2;
    }
    return -1;
}
int main()
{
    int arr[6] = {1,2,3,4,5,6};
    int index = binarySearch(arr, 6, 4);
    cout<<"the index of the 4th number is the \n"<<index<<endl;
}
