// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main() {
    int x,z;
    cin>>x;
    input:
    cin>>z;
    if(z<=x) goto input;
    int sum, count=0;
    for(int i=x,sum=0; sum<z; i++){
        sum +=i;
        count++;
    }
    cout<<count<<endl;

    return 0;
}
