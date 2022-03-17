#include <iostream>
#include <sstream>
#include <string_view>
#include <vector>

using namespace std;

long aVeryBigSum(vector<long> ar);

int main() {

    return 0;
}

long aVeryBigSum(vector<long> ar) {
    long sum = 0;
    for(long i : ar) {
        sum += i;
    }
    return sum;
}
