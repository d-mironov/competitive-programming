#include <iostream>
#include <sstream>
#include <string_view>
#include <vector>

using namespace std;

string kangaroo(int x1, int v1, int x2, int v2);

int main() {

    cout << kangaroo(0, 3, 4, 2) << endl;

    return 0;
}

string kangaroo(int x1, int v1, int x2, int v2) {
    string out;
    int k1 = x1, k2 = x2;
    if (x1 > x2 && v1 >= v2) {
        return "NO";
    } else if (x2 > x1 && v2 >= v1) {
        return "NO";
    } else if (v1 == v2 && x1 != x2) {
        return "NO";
    }

    if (x1 > x2) {
        while (k2 <= k1) {
            if (k1 == k2)
                return "YES";
            k1 += v1; k2 += v2;
        }
    } else {
        while (k1 <= k2) {
            if (k1 == k2)
                return "YES";
            k1 += v1; k2 += v2;
        }
    }
    return "NO";
}
