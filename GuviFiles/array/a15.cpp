// Pk finds it difficult to judge the minimum element in the list of elements given to him. Your task is to develop the algorithm in order to find the minimum element.

 

// Note:Don’t use sorting
 


// Input Description:
// You are given ‘n’ number of elements. Next line contains n space separated numbers.

// Output Description:
// Print the minimum element

// Sample Input :
// 5
// 3 4 9 1 6
// Sample Output :
// 1

#include <iostream>
#include<vector>

using namespace std;

int least( vector<int>& array, int siz ){
    int min= array[0];    
    for(int i =0;i<siz;i++){
        if(array[i]<min){
            min = array[i];
        }
    }
    return min;
}
int main() {
    int arr_size;
    cin >> arr_size;
    if (arr_size <= 0) return 0;

    vector<int> input_array(arr_size, arr_size);
    for (int i = 0; i < arr_size; i++) {
        cin >> input_array[i];
    }

    cout << least(input_array) << endl;
    return 0;
}

/*
Time Complexity
least function: Loops through all siz elements → O(n).
Input reading loop: Also O(n).
Total = O(n).

Space Complexity
Vector input_array: Stores all n integers → O(n).
Extra variables: Just a few integers (min, loop counters) → O(1).
Total: O(n) due to storing the array.*/
