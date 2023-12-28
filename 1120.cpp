#include <bits/stdc++.h>
using namespace std;
int main() {
    char n;
    string s;
    while(cin>>n){
        cin>>s;
        int count = 0;
        long long int length = s.size();
        if(n == '0' && s[0] == '0') break;

        for(int i = 0 ; i < length ; i++){
            if(s[i] == '0'){
                if(count != 0)
                       cout<<s[i];
            }
            else if (s[i] != n){
                cout<<s[i];
                count++;
            }

        }
        if(count == 0) cout<<0<<endl;
        else cout<<endl;
    }

    return 0;
}
