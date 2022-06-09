#include <cmath>
#include <cstddef>
#include <iostream>
#include <sstream>
#include <string_view>
#include <vector>

using namespace std;

int diagonalDifference(vector<vector<int>> arr);

int main() {
    vector<vector<int>> arr1
    {
        {1, 2, 3},
        {4, 5, 6},
        {9, 8, 9}
    };
    cout << diagonalDifference(arr1) << endl;

    return 0;
}

int diagonalDifference(vector<vector<int>> arr) {
    int sum_left_to_right = 0;
    int sum_right_to_left = 0;
    for (std::size_t i = 0, j = arr.size() - 1; i < arr.size(); i++, j--) {
        sum_left_to_right += arr[i][i];
        sum_right_to_left += arr[i][j];
    }
    return abs(sum_left_to_right - sum_right_to_left);
}
