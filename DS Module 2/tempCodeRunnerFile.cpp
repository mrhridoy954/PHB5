#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n; // ইনপুট নেওয়ার জন্য ন এর মান নির্ধারণ
    vector<int> v(n); // ভেক্টর ইনিশিয়ালাইজেশন ন এর সাইজ অনুযায়ী
    for(int i=0; i<n; i++)
    {
        cin >> v[i]; // ভেক্টরে এলিমেন্ট ইনপুট নেওয়া
    }
    for(int val : v)
    {
        cout << val << " "; // ভেক্টরের এলিমেন্ট প্রিন্ট করা
    }
}


