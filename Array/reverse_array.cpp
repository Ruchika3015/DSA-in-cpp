#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    int arr[100];        //Initialising array
    cout<<"Enter number of elements=";
    cin>>n;             //Taking size of array
    for(int i=0;i<n;i++)
    {
    cout<<"Enter element "<<i+1<<"=";
    cin>>arr[i];           //Taking array elements as input
    }
    cout<<"Reversed array:-\n";
    for (int i=n-1;i>=0;i--)     //traversing array in reverse order
    {
        cout<<arr[i]<<"\t";
    }
}
