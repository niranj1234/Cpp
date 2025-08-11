// You are a passport issuer, but due to some problems in the system, there are redundant  passport numbers. Your task is to delete all the duplicate passport numbers. You are given a list of passport numbers.


// Input Description:
// You are given length of list.Second line,You are given with a list.

// Output Description:
// Print the list of passport numbers without duplicates.

// Sample Input :
// 5
// A23 B56 B56 C79 D16
// Sample Output :
// A23 B56 C79 D16

#include <iostream>
#include<vector>
#include<algorithm>
#include <string>


using namespace std;
int main() {

   int c;
   cin>>c;
   
if (c <= 0) {
   return 0;
}
   vector<string> arr;
   arr.reserve(c);
       for (int i = 0; i < c; i++) {
        string b; 
        cin >> b; 
        arr.push_back(b); 
    }
   
//   sort(arr.begin(), arr.end());
   
  // arr.erase(unique(arr.begin(), arr.end()), arr.end());
   
   
   for(int n = 0; n < arr.size(); ++n){
        for(int m = n+1; m<arr.size();++m){
            if(arr[n] == arr[m]){
                arr.erase(arr.begin()+m);
            }
        }       
   }
   
       for (size_t i = 0; i < arr.size(); ++i) {
        cout << arr[i];
        
        if (i < arr.size() - 1) {
            cout << " ";
        }
    }
   cout << endl;
    return 0;
}
