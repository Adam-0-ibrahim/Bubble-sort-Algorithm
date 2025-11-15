#include <iostream>
using namespace std;
int main()
{    
    cout<<"Enter the array length"<<endl; 
    int length;
    cin>>length;
    int arr [length];
    cout<<"Enter "<<length<<" numbers"<<endl;
    for (int x = 0; x < length; x++)
    {
        cin>>arr[x];  //taking the array value before ordering
    }
    
    for (int i=0;i<length;i++)  
    {
    for (int n = 0; n <length-1; n++) 
    {
        if (arr[n]>arr[n+1])
        {
           int temp= arr[n];
           arr[n]= arr[n+1];
           arr[n+1]=temp;
        }   
    }
    
    }
    cout<<"The numbers after arranging ascendingly are:"<<endl;
    for (int i = 0; i < length; i++)
    {
        cout<<arr[i]<<" "<<endl;
    }
    
}