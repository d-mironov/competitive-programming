#include <iostream>
#include <sstream>
#include <string_view>
#include <vector>

using namespace std;

void plusMinus(vector<int> arr);

int main() {
    vector<int> arr1 = {1, 1, 0, -1, -1};
    plusMinus(arr1);
    vector<int> arr2 = {1, 1, 1, -1, -1};
    plusMinus(arr2);

    return 0;
}

void plusMinus(vector<int> arr) {
    int pos = 0, zero = 0, neg = 0;
    int len = arr.size();
    for (int i : arr) {
        if (i < 0) { neg++; }
        else if (i > 0) { pos++; }
        else { zero++; }
    }
    cout << (pos / (float) len) << endl;
    cout << (neg / (float) len) << endl;
    cout << (zero / (float) len) << endl;
}
