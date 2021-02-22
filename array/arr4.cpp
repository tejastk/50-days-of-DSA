#include <iostream>
using namespace std;
int main()
{
    int i,n,a[20],b[20];
    cout<<"Enter the number of elements";
    cin>>n;
    for (i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    for (i = 1; i<= n;i++)
    {
       cout<<a[n-i];
       cout<<"";
    }
    return 0;
    
}