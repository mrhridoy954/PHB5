// 5.4 .String Modifier

#include <bits/stdc++.h>
using namespace std;
int main()
{
    // string a = "Hello";

    // string b = " World";
    //  a+=b;
    //  a.append(b);
    //  cout << a << endl;
    // a[5]='A'; ->didn't work
    // a=a+'A';  ->Work
    // a.push_back('A');   //works
    // a.pop_back();
    // cout<<a<<endl;

    // https://www.geeksforgeeks.org/cpp-string-functions/

    // 5.5 String Modifier

    // string  a="Gelo";
    //  cout<<a<<endl;
    // a.assign("Gelo");
    // cout<<a<<endl;

    string a = "HelloWorld";
    // a.erase(4,1);  //HellWorld
    // a.replace(4,3,"so");   //Hellsorld
    a.replace(5, 0, "so"); // HellosoWorld
    // a.insert(5," Hridoy ");   //Hello Hridoy World

    cout << a << endl;

    return 0;

}




// 5-7   String Input With Spaces

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x;
    cin >> x;
    // cin.ignore();   //getline dile eta dibo
    getchar(); // cin.ignore() and getchar() both do same work

    string s;

    // cin>>s;

    // cin >>s;
    // cin.getline(s,100);   //this code will not work this way
    // char s[100];

    getline(cin, s); // space thakle getline use korbo notuba korbo na

    cout << x << endl;
    cout << s << endl;

    return 0;
}



// 5-8  Stringstrean in c++

#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin, s);
    // cout<<s<<endl;
    stringstream ss(s);
    string word;
    while (ss >> word)
    {
        cout << word << endl;
    }

    return 0;
}