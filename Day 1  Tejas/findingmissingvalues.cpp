#include <iostream>
using namespace std;
int main(){
    int i,n,diff,a[20];
    cout<<"The Size of the array is";
    cin>>n;
    for (i = 0; i < n; i++)
    {
        cin>>a[i];

    }
    diff=a[0];
    for (i = 0; i < n; i++)
    {
        if(a[i]-i!=diff)
        {
            while (diff<a[i]-i)
            {
                cout<<i+diff<<"\n";
                diff++;
            }
            
        }
    }
    
    
   return 0; 
}