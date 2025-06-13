// Find the first 0 in window of size k. You  are given n numbers and window size ‘w’

// Your task is to print the first index which has 0


// Input Description:
// You are given two numbers ‘n’ and ‘w’ n representing size of array and ‘w’ size of window

// Output Description:
// Print the index of first 0(1 basedindexing),if there is no index with 0 print -1

// Sample Input :
// 7 2
// 1 0 6 7 4 0 9
// Sample Output :
// 2 2 -1 -1 6 6


#include<iostream>
#include<vector>

using namespace std;

vector<int> basedindexing(const vector<int>& arr, int n, int w) {
    // vector<int> count(w, 0);

        vector<int> arr_o;
    for(int i=0; i<= n-w;++i){
        int f = -1;
        for (int j = i; j < i + w; ++j) {
            if(arr[j] == 0){
                f = j + 1;
                break;
            }
        }
        arr_o.push_back(f);
    }
    
    return arr_o;
}



int main(){
    int n,w;
    cin>>n>>w;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    vector<int> result = basedindexing(arr, n, w);
    for(size_t x = 0; x < result.size(); ++x){
        cout << result[x];
        if(x != result.size()-1){
            cout << " ";
        }
    }
    cout << endl;
    return 0;
}

// // 7 2
// // 1 0 6 7 4 0 9

// // 2 2 -1 -1 6 6


// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//         int n,w;
//         cin>>n>>w;

//         vector<int> arr(n);
//         for(int i=0;i<n;i++){
//             cin>>arr[i];
//         }
    
//     vector<int> arr_o;
    
//     for(int i=0; i< n-w;++i){
//         int f = -1;
//         for (int j = i; j < i+w; ++j) {
//             if(arr[j]==0){
//                 f = j+i;
//                 break;
//             }
//         }
//         arr_o.push_back(f);
//     }
//     for(size_t x=0;x<arr.size();++x){
//         cout<<arr[x]<<' ';
        
//     }
// }