#include<bits/stdc++.h>
using namespace std;

int main() {
    char str[10^5];
    
    while(cin.getline(str,10^5)){
        int H= strlen(str);
        
        sort(str, str+H);
        for(int i = 0;i <H; i++){
            if(str[i]!=' ') {
                cout <<str[i];
            }
        }
        
        cout<<endl;
    }
    
    return 0;
}
