// Assume you are a student studying in school.You are given a task to find first negative integer for each and every window of size k.


// Input Description:
// First line contains an integer n denoting the size of the array. The next line contains n space separated integers forming the array. The last line contains the window size k.

// Output Description:
// Print the first negative integer in that window.If all the numbers are positive print 0

// Sample Input :
// 7
// 1 -2 -3 -4 5 6 -7
// 3
// Sample Output :
// -2 -2 -3 -4 -7

#include <iostream>
#include<vector>
#include<algorithm>
#include <string>


using namespace std;

vector<int> windout(const vector<int>& array, int window) {
    vector<int> out_arr;
    for(int i =0; i<= array.size()-window;i++){
        for(int n = i; n<window+i; n++){
            if(array[n]<0){
                out_arr.push_back(array[n]);
                break;
            }
            else if(n==window+i-1){
                out_arr.push_back(0);
            }
        }
    }
    
    return out_arr;
}

int main(){
   int arr_size;
   cin>>arr_size;
   
if (arr_size <= 0) {
   return 0;
}
   vector<int> input_array;
   input_array.reserve(arr_size);
       for (int i = 0; i < arr_size; i++) {
        int b; 
        cin >> b; 
        input_array.push_back(b); 
    }
    
    int window;
    cin >> window;
    vector<int> output = windout(input_array,window);
    
    for(size_t x = 0; x < output.size(); ++x){
        cout << output[x];
        if(x != output.size()-1){
            cout << " ";
        }
    }
    cout << endl;
    return 0;

}




