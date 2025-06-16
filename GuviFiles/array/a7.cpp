// You are given with two arrays. Your task is to merge the array such that first array is in ascending order and second one in descending order.


// Input Description:
// First line contains two integer ‘n’ and ‘m’. ‘n’ denotes length of array 1 and ‘m’ of array 2.Next line contains n space separated numbers and third line contains ‘m’ space separated numbers

// Output Description:
// Print a single array in desired order

// Sample Input :
// 3 3
// 23 15 16
// 357 65 10
// Sample Output :
// 15 16 23 357 65 10

#include<iostream>
#include<vector>
#include<algorithm>
#include<functional>

std::vector<int> arrayord_modify_originals(std::vector<int>& arr1, std::vector<int>& arr) {

    std::sort(arr1.begin(), arr1.end());
    std::sort(arr.begin(), arr.end(), std::greater<int>());

    std::vector<int> result;
    result.reserve(arr1.size() + arr.size());

    result.insert(result.end(), arr1.begin(), arr1.end());
    result.insert(result.end(), arr.begin(), arr.end());

    return result;
}

int main(){
    int n, m;
    std::cin >> n >> m;

    std::vector<int> arr1(n);
    std::vector<int> arr(m);

    for(int i = 0; i < n; i++) {
        std::cin >> arr1[i];
    }
    for(int i = 0; i < m; i++) {
        std::cin >> arr[i];
    }

    std::vector<int> result = arrayord_modify_originals(arr1, arr);
    for(size_t i = 0; i < result.size(); i++) {
        std::cout << result[i];
        if (i < result.size() - 1) {
            std::cout << " ";
        }
    }
    return 0;
}