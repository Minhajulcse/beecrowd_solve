// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main() {
    int a,n,sum=0;
    cin>>a;
    input:
    cin>>n;
    if(n<=0) goto input;
    for(int i=0; i<n; i++){
        sum +=a;
        a++;
    }
    cout<<sum<<endl;

    return 0;
}
