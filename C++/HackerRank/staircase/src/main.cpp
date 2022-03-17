#include <iostream>
#include <sstream>
#include <string_view>
#include <vector>

using namespace std;

void staircase(int n);

int main() {

    staircase(6);
    return 0;
}

void staircase(int n) {
    for (int i = 0; i < n; i++) {
        for (int j = i; j < (n-1); j++) {
            cout << " ";
        }
        for (int j = 0; j < (i + 1); j++) {
            cout << "#";
        }
        cout << endl;
    }
}
