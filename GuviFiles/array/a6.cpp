// A person saves his monthly saving according to given schema. He saves same amount of money which is equal to the money saved in immediate previous two months. Assume, initially he saved 1000 rupees and in first month he saved another 1000. Your task is to tell how much he had totally saved at the end of ‘n’ months

// Input Description:
// You will be given a number ‘n’->No. of months

// Output Description:
// Print the total savings at the end of ‘n’ months

// Sample Input :
// 1
// Sample Output :
// 2000

#include<iostream>
using namespace std;

int total_saved(int n){
    long long total = 1000; 
    long long ppre = 1000;
    long long pre = 1000;

    if (n == 0){
        return total; 
    }
    
    total += pre; 
    if (n == 1){
        return total;
    }

    for(int i = 2; i <= n; i++){
        long long current = pre + ppre; 
        total += current;               
        ppre = pre;                     
        pre = current;                  
    }
    return total;
}
int main(){
    int n;
    cin >> n;    
    int total = total_saved(n);
    cout << total << endl;
    return 0;
}
