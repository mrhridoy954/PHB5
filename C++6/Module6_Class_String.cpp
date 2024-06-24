// //6-1
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     // string s("Hello world",4);  //Hell
//     //string a = ("Hello world");
//     //string s(a, 4); // o world

//     string s(50,'L');

//     cout << s << endl;

//     return 0;
// }


// //6-2 Sort string using sort() function

// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//    string s;
//    cin>>s;
//    sort(s.begin(),s.end());
//    cout<<s<<endl;


//     return 0;
// }



// //6-3 Ranged based For loop in string
// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     string s;
//     cin >>s;
//     for(char c:s)
//     {
//         cout<<c<<endl;
//     }
//     return 0;
// }


// //6-4 Reverse word printing using Stringstream

// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     string s;
//     getline (cin,s);
//     stringstream ss(s);
//     string word;
//     while (ss>>word)
//     {
        
//     }

//     return 0;
// }


//6-5 Function inside class

#include<bits/stdc++.h>
using namespace std;
class Person 
{
    public:
    string name;
    int age;
    Person(string nm, int ag)
    {
        name =nm;
        age=ag;
    }
};
int main()
{
    Person Hridoy("Masud Rana",22);
    cout<<Hridoy.name<<" "<< Hridoy.age<<endl;

    return 0;
}