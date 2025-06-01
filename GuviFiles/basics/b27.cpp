// Given a number N followed by N numbers.Find the smallest number and largest number and print both the indices(1 based indexing).
// Input Size : N <= 100000
// Sample Testcase :
// INPUT
// 5
// 1 2 3 4 5
// OUTPUT
// 1 5

  
#include <vector>  
#include <algorithm> 
using namespace std;

pair<int, int> check(const vector<int>& num){
    
    int min_val = num[0];
    int max_val = num[0];
    int min_ind=1,max_ind =1;
    for(int i=0;i<num.size();i++){
       if (num[i] < min_val) {
                min_val = num[i];
                min_ind = i+1;
            }
        if (num[i] > max_val) {
            max_val = num[i];
            max_ind = i+1;
        }
    }
   return{min_ind, max_ind};
}

int main() {
    int n;
    cin>> n;
    vector<int> num(n);
    
    for(int i=0;i<n;i++){
        cin>>num[i];
        
    }
    pair<int, int> result = check(num);
    
    cout <<  result.first <<" "<< result.second<<endl;

    return 0;
}
