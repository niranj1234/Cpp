// Given 3 numbers A,B,C print 'yes' if they can form the sides of a scalene triangle else print 'no'.
// Input Size : A,B,C <= 100000
// Sample Testcase :
// INPUT
// 3 4 5
// OUTPUT
// yes
  
#include <iostream> 
#include <vector>   

using namespace std;

bool triag(int a,int b, int c) {
    
    int bt = 0;
    
     bool forms_triangle = (a + b > c) && (a + c > b) && (b + c > a);

    bool is_scalene = (a != b) && (a != c) && (b != c);
    
    return forms_triangle && is_scalene;
}

int main() {


    int a,b,c; 
    cin >> a>>b>>c; 

    

    if(triag(a,b,c) ) cout<<"yes"<<endl;
    
    else cout << "no" << endl;

    return 0; 
}
