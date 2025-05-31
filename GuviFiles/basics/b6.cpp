// Given a number N, print 'yes' if it is composite else print 'no'.
// Sample Testcase :
// INPUT
// 123
// OUTPUT
// yes

#include<iostream>
using namespace std;
int main() {
    int n;
    cin >> n;

    if (n==1 || n==2 || n==3){
        cout<<"no"<<endl;
    } else if (n % 2 == 0) {
        cout<<"yes"<<endl;
    } else {
        for(int i=3; i*i <= n; i++) {
            if (n % i == 0) {
                cout<<"yes"<<endl;
                return 0;
            }
        }

    }
    cout<<"no"<<endl;
    return 0;
}
