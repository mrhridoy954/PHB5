#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int * a=new int[3];
    cout<<"Enter 3 numbers:"<<endl;
    for (int i=0;i<3;i++)
    {
        cin>>a[i];
    }
    cout<<"Before delete:"<<endl;
    for (int i=0;i<3;i++){

    cout<<a[i]<<" ";
    }
    cout<<endl;
delete[] a;
cout<<"After delete:"<<endl;
for (int i=0;i<3;i++)
{
    cout<<a[i]<<" ";
}
    return 0;
    
}