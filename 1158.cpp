#include <iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;
    int x,y, ans = 0;
    while(t--){
        cin>>x>>y;
        if(x%2==0) x = x + 1;
        for(int i = 0; i < y; i ++ ){
            ans += x;
            x = x + 2;
        }
        cout<<ans<<endl;
        ans = 0;
    }
    return 0;
}
