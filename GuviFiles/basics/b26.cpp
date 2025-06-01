// Given 2 numbers N and K followed by N elements,print the number of repetition of K otherwise print '-1' if the element not found.
// Sample Testcase :
// INPUT
// 6 2
// 1 2 3 5 7 8
// OUTPUT
// 0

#include <iostream>
#include <vector>  
using namespace std;

int check(int a ,vector<int>& num){
    int c=0;
    for(int i=0;i<num.size();i++){
        if(num[i]==a) {
            c++;
        // cout<<c<<endl;
        }
    }
    return c;
}


int main() {
    int n,k;
    cin>> n>>k;
    vector<int> num(n);
    
    for(int i=0;i<n;i++){
        cin>>num[i];
        
    }
    
    
    int rep= check(k,num);
    
   if (rep == 0) {
        cout << -1 << endl;
    } else {
        cout << rep-1 << endl;
    }

    return 0; 
}
