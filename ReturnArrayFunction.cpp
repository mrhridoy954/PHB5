#include<bits/stdc++.h>
using namespace std;
int *fun()
{
    int *a=new int[5];
    for(int i=0;i<5;i++)
    {
        cin>>a[i];
    }
    //int a[5]={10,20,30,40,50};
    return a;
}
int main()
{
int *a= fun();
for(int i=0;i<5;i++)
{
    cout<<a[i]<<" " ;
}
return 0;
}
