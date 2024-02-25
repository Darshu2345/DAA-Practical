#include<iostream>
using namespace std;
int main()
{
    int a[5],i;
    int max=a[0];
    int min=a[0];
    cout<<"Enter elements in array";
    for(i=0;i<5;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<5;i++)
    {
        if(min>a[i])
        {
            min=a[i];
        }
        if(max<a[i])
        {
            max=a[i];
        }
    }
    cout<<"min ="<<min<<"\n"<<"max ="<<max;
    return 0;
}
