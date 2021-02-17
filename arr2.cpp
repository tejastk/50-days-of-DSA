#include <iostream>
using namespace std;
int main()
{
int i,n,arr[20],largest,second_largest;
cout<<"Enter The number of Elements";
cin>>n;
for (i = 0; i < n; i++)
{
    cin>>arr[i];
}
largest=arr[0];
for (i = 0; i < n; i++)
{
    if(arr[i]>largest)
    {
        largest=arr[i];
    }
}
second_largest=arr[1];
for (i=0; i < n; i++)
{
    if(arr[i]!=largest)
    {
        if(arr[i]>second_largest)
        {
            second_largest=arr[i];
        }
    }
}
cout<<"Largest Element is :"<<largest;
cout<<"Second Largest Element is :"<<second_largest;

return(0);

}