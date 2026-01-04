#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    int arr[100];        //Initialising array
    cout<<"Enter number of elements=";
    cin>>n;             //Taking size of array
    int count=0;
    int maxfreq=0;
    for(int i=0;i<n;i++)
    {
        cout<<"Enter element "<<i+1<<"=";
        cin>>arr[i];           //Taking array elements as input
    }
    for (int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if (arr[i]==arr[j])
            {
                count++;
            }
        }
        if (count>maxfreq)
        maxfreq=count;
        count=0;
    }
    cout<<"Maximum frequency is "<<maxfreq;
}
