// Check whether the given 4 points form a square or not.
// Example:
// INPUT
// 10 10
// 10 20
// 20 20
// 20 10
// OUTPUT
// yes


#include<iostream>
#include<vector>
#include<cmath>
#include<algorithm>

using namespace std;

struct point{
    long long x,y;
};

long long distSq(const point& p1, const point& p2) {
    return (p1.x - p2.x) * (p1.x - p2.x) + (p1.y - p2.y) * (p1.y - p2.y);
}
int main() {
    vector<point> points(4);
    for (int i = 0; i < 4; ++i) {
        cin >> points[i].x >> points[i].y;
    }
    
  vector<long long> distances;
  
    distances.push_back(distSq(points[0], points[1]));
    distances.push_back(distSq(points[0], points[2]));
    distances.push_back(distSq(points[0], points[3]));
    distances.push_back(distSq(points[1], points[2]));
    distances.push_back(distSq(points[1], points[3]));
    distances.push_back(distSq(points[2], points[3]));

    // Sort the distances
    sort(distances.begin(), distances.end());
    
    // Check conditions for a square:
    // 1. Four equal non-zero side lengths (first four distances)
    // 2. Two equal diagonal lengths (last two distances)
    // 3. Diagonal_sq = 2 * Side_sq
    if (distances[0] > 0 && // Sides must be non-zero length
        distances[0] == distances[1] &&
        distances[0] == distances[2] &&
        distances[0] == distances[3] && // Four sides are equal
        distances[4] == distances[5] && // Two diagonals are equal
        distances[4] == 2 * distances[0]) { // Diagonal^2 = 2 * Side^2
        cout << "yes" << endl;
    } else {
        cout << "no" << endl;
    }

    return 0;
}
