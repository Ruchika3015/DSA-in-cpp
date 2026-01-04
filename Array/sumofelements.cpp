#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[100];
    int n,sum=0;
    cout<<"Enter number of elements=";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cout<<"Enter element "<<i+1<<"=";
        cin>>arr[i];
        sum=sum+arr[i];
    }
    cout<<"Sum of elements is "<<sum;
}
