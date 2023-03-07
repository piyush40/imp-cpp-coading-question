//linear search in the array


#include<bits/stdc++.h>
using namespace std;
bool search (int arr[], int size, int key)
{
    for(int i =0; i<size;i++)
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
    int arr[5] = {1,2,3,4,5};
    int key;
    cout<<"enter the key"<<endl;
    cin>>key;
    bool found = search(arr,5,key);
    if(found)
    {
        cout<<"the key is present in the  array"<<endl;
    }
    else
    {
        cout<<"key is not present in the array"<<endl;
    }
}
