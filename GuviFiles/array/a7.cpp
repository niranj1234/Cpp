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