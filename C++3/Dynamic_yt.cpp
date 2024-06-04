#include<bits/stdc++.h>
using namespace std;
int main()
{

  int *arr=new int [3];
  delete []arr;
  arr[0]=10;
  arr[1]=20;
  arr[2]=30;
  cout<<arr[0]<<" "<<arr[1]<<" "<<arr[2]<<endl; 
    return 0;
}