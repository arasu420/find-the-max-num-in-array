#include <iostream>
using namespace std;
int main()
{
    int i,n,max;
    int a[1000];
    cout<<"Enter the number : ";
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    max=a[0];
    for(i=0;i<n;i++)
    {
        if(a[i]>max)
        {
            max=a[i];
        }
    }
    cout<<max;      
return 0;    
}
