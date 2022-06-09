#include <cstdint>
#include <iostream>
#include <sstream>
#include <string_view>
#include <vector>

using namespace std;

void miniMaxSum(vector<int> arr);

int main() {
    vector<int> arr1 = {1,2,3,4,5};
    miniMaxSum(arr1);

    vector<int> arr2 = {396285104, 573261094, 759641832, 819230764, 364801279};
    miniMaxSum(arr2);

    return 0;
}

/**
 * Calculate minimum and maximum sum of 4 integers from a vector
 * Should be for vector size of 5 but works with all sizes
 */
void miniMaxSum(vector<int> arr) {
    long max = 0, min = INT64_MAX;
    long sum = 0;
    int len = arr.size();
    for (int i = 0; i < len; i++) {
        for (int j = i; j < (i + 4); j++) {
            sum += arr[((j % len) + len) % len];
        }
        max = (sum > max)?(sum):(max);
        min = (sum < min)?(sum):(min);
        sum = 0;
    }
    cout << min << " " << max << endl;
}
