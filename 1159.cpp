#include <iostream>

using namespace std;

int main()
{
    int x,sum=0;
    while(1){
        cin>>x;
        if(x == 0) break;
        if( x % 2 == 0){
            for(int i = 0; i < 5; i++){
                sum +=x;
                x = x + 2;
            }
            cout<<sum<<endl;
        }
        else {
            x = x + 1;
            for( int i = 0; i < 5; i++){
                sum += x;
                x = x + 2;
            }
            cout<<sum<<endl;
        }
        sum = 0;
    }
    return 0;
}
