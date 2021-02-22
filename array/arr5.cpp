#include <iostream>
using namespace std;
int main()
{
    int i,j,n,arr[20][20],arr1[20][20],sum[20][20];
    cout<<"Enter the Size of Array";
    cin>>n;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            cin>>arr[i][j];
            cout<<"\n";
        }
        

    }
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            cin>>arr1[i][j];
            cout<<"\n";
        }
    }
    cout<<"The Sum of the Matrix is :"<<endl;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            sum[i][j]=arr[i][j]+arr1[i][j];
            cout<<sum[i][j];
            cout<<"\n";
        }
        
    }
    return 0;
    
    
}