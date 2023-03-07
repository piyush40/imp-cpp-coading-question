// reverse the array 
#include<bits/stdc++.h>
using namespace std; 
void revArray(int arr[], int n)
{
    int start =0;
    int end = n-1;
    while(start <= end)
    {
        swap (arr[start] , arr[end]);
        start++ ;
        end-- ;
    }
}
void printArray(int arr[], int size)
{
    for(int i =0;i<size;i++)
    {
        cout<<arr[i]<<" "<<endl;
    }
}
int main()
{
    int arr[5] ={1,5,8,9,2};
    int brr[8] = {7,9,9,1,8,5,6,9};
    revArray(arr,5);
   
    revArray(brr,8);
    
    
    printArray(arr,5);
     cout<<endl;
    printArray(brr,8);
}
