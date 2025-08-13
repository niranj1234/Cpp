// Ramesh is a student and wants to find out if there is any other student in his class who has got the same marks as his, in maths. Help him to find out.

// Input Description:
// First line contains the number of students in the class followed by Ramesh’s mark. Second line contains the marks of all students in the class.

// Output Description:
// Index of student who got mark same as Ramesh’s mark. If no such mark exists, return -1.

// Sample Input :
// 2 10
// 1 2
// Sample Output :
// -1

#include <iostream>
#include <string>
#include <vector>
using namespace std;

int marksmatch(int no, int target, vector<int> &mark) {
for(int i =0;i<no;i++){
    if(mark[i]==target){
        return i;
        }
    }
    return -1;
}

int main() {
    int nostudent, ramesh;
    cin >> nostudent>>ramesh;
    
    vector<int> marks;
    
    for(int i=0;i<nostudent;++i){
        int b;
        cin>>b;
        marks.push_back(b);
    }

    int output = marksmatch(nostudent,ramesh,marks );
    cout << output << endl;

    return 0;
}
