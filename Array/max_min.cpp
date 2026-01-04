#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[100],n;
    cout<<"Enter number of elements=";
    cin>>n;          //Taking size of array
    for (int i=0;i<n;i++)        //Making array
    {
        cout<<"Enter element "<<i+1<<"=";
        cin>>arr[i];
    }
    int max=arr[0];         //Initialising max with first element of array
    int min=arr[0];         //Initialising min with first element of array
    for (int i=0;i<n;i++)
    {
        if (arr[i]>max)         //Checking for maximum element
        {
            max=arr[i];         //Updating maximum element
        }
        if (arr[i]<min)         //Checking for minimum element
        {
            min=arr[i];        //Updating minimum element
        }
    }
    cout<<"Maximum element is "<<max<<"\n";
    cout<<"Minimum element is "<<min;
}
