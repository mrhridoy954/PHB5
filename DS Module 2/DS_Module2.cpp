// // vector initialization

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     vector<int> v;          // type 1
//     vector<int> v(5);       // type 2
//     vector<int> v(5, 10);   // type 3
//     vector<int> v2(5, 100); // type 4
//     vector<int> v(v2);

//     int a[6] = {1, 2, 3, 4, 5, 6}; // type 5
//     vector<int> v(a, a + 6);

//    // vector<int>v={2,10,3};

//     for (int i = 0; i < v.size(); i++)
//     {
//         cout << v[i] << " ";
//     }
//     cout << endl;
//     cout << v.size() << endl;

//     return 0;
// }

/*output:
type 1:
0

type 2:
0 0 0 0 0
5

type 3:
10 10 10 10 10
5

type 4:
100 100 100 100 100
5

type 5:
1 2 3 4 5 6
6
*/

// // 2-2 Vector Capacity Function

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     vector<int> v;
//     // cout<<v.max_size()<<endl;
//     //cout << v.capacity() << endl;
//     v.push_back(10);
//    // cout << v.capacity() << endl;

//     v.push_back(20);
//    // cout << v.capacity() << endl;
//     v.push_back(30);
//    // cout << v.capacity() << endl;
//    v.push_back(40);
//    v.push_back(50);
// //    v.clear();
// //    cout<<v.size()<<endl;
//     v.resize(2);
//     v.resize(7);

//    for(int i=0;i<v.size();i++)
//    {
//     cout<<v[i]<<" ";
//    }

//     return 0;
// }

// //2-3 Vector Modifiers Function I

// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     vector<int>x={10,20,30};
//     // vector<int>v={1,2,3};
//     // v=x;
//     // for(int i=0;i<v.size();i++)
//     // {
//     //     cout<<v[i]<<" ";
//     // }
//     x.pop_back();
//     x.pop_back();
//     for(int i=0;i<x.size();i++)
//     {
//         cout<<x[i]<<" ";
//     }

//     return 0;
// }

// // Vector insert

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     vector<int> v = {1, 2, 3, 4, 5};
//     vector<int> v2 = {100, 101, 102, 103};
//     // v.insert(v.begin()+2,10);   //output: 1 2 10 3 4 5
//     v.insert(v.begin() + 2, v2.begin(), v2.end()); // Output:1 2 100 101 102 103 3 4 5
//     for (int x : v)
//     {
//         cout << x << " ";
//     }

//     return 0;
// }

// //Vector Erase
// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     vector<int>v={1,2,3,4,5};
//     //v.erase(v.begin()+2); //Output: 1 2 4 5
//    // v.erase(v.begin()+1,v.begin()+4); // Output:1 5
//     v.erase(v.begin()+1,v.end()-1);   //Output: 1 5
//     for(int x:v)
//     {
//         cout<<x<<" ";
//     }
//     return 0;
// }

// 2-4 Vector Modifier Function II

// Replace the vector

// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     vector<int>v={1,2,2,4,3,5,1,2,4,5,3,2};

//     replace(v.begin(),v.end()-1,2,100); //Output:1 100 100 4 3 5 1 100 4 5 3 2

//     for(int x:v)
//     {
//         cout<<x<<" ";
//     }
//     return 0;
// }

// Find the vector

// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     vector<int>v={1,2,2,4,3,5,1,2,4,5,3,2};
//      // vector<int>:: iterator it; // এই লাইনটি অপ্রয়োজনীয় এবং এটি সরিয়ে দিতে হবে

//     auto it=find(v.begin(),v.end(),2);
//       if(it==v.end()){
//         cout<<"Not Found";
//       }
//       else
//       cout<<*it<<" Found";

// }

// //2-5  Vector Access and Iterators

// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     vector<int>v={1,2,3,4,5};
//  //   vector<int>::iterator it;
//     //cout<<v[v.size()-1]<<endl; //output:5
//     //cout<<v.back()<<endl; //output:5
//     for(auto it=v.begin();it<v.end();it++)
//     {
//         cout<<*it<<" "; //
//     }

// }

// Vector Sorting

// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     vector<int>v={1,2,9,4,4,5,2};
//     sort(v.begin(),v.end());
//     for(int x:v)
//     {
//         cout<<x<<" ";
//     }
// }

// 2-6 How to Take Input of Vector

// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//   vector<int> v;
//     int n;
//     cin >>n;  //Input: 5
//     for (int i=0;i<n;i++)
//     {
//         int x;
//         cin>>x;   //Input: 2,3,5,1,1
//         v.push_back(x);

//     }
//     for(int x:v)
//     {
//         cout<<x<<" ";   //Output: 2,3,5,1,1
//     }
// }

// //2nd Type

// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n; // ইনপুট নেওয়ার জন্য n মান নির্ধারণ
//     vector<int> v(n); // ভেক্টর ইনিশিয়ালাইজেশন n এর সাইজ অনুযায়ী
//     for(int i=0; i<n; i++)
//     {
//         cin >> v[i]; // ভেক্টরে এলিমেন্ট ইনপুট নেওয়া
//     }
//     for(int val : v)
//     {
//         cout << val << " "; // ভেক্টরের এলিমেন্ট প্রিন্ট করা
//     }
// }

// 2-7 Vector of Strings
//  #include<bits/stdc++.h>
//  using namespace std;
//  int main()
//  {
//      vector<string>v={"apple","banana","orange"};
//      for(string x:v)
//      {
//          cout<<x<<" ";
//      }
//  }

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    cin.ignore();
    vector<string> v(n);
    for (int i = 0; i < n; i++)
    {
        getline(cin, v[i]);
    }
    for (string x : v)
    {
        cout << x << endl;
    }
    return 0;
}
