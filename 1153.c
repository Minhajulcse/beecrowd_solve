// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

void printFactorial(int n){
    int fact = 1;
    while(n>0){
        fact *=n;
        n--;
    }
    cout<<fact<<endl;
}

int main() {
    int n;
    cin>>n;
    printFactorial(n);

    return 0;
}
