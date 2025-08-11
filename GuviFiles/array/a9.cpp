// you are given with array of numbers.you have to find whether array is beautiful or not. A beautiful array is an array whose sum of all numbers is divisible by 2, 3 and 5


// Input Description:
// You are given a number ‘n’ denoting the size of array.Next line contains n space separated numbers.

// Output Description:
// Print 1 if array is beautiful and 0 if it is not

// Sample Input :
// 5
// 5 25 35 -5 30
// Sample Output :
// 1

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
   vector<int> arr;
   arr.reserve(c);
       for (int i = 0; i < c; i++) {
        int b; 
        cin >> b; 
        arr.push_back(b); 
    }

   int sum =0;
   for(int n = 0; n < arr.size(); ++n){
        sum+=arr[n];
        }       

   if (sum % 2 == 0 and sum % 3 == 0 and sum % 5 == 0){
       cout<<1;
   }
   else{
   cout<<0;
}
    return 0;
}
