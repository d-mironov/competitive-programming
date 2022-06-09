#include <cstddef>
#include <iostream>
#include <sstream>
#include <string_view>
#include <vector>

using namespace std;

vector<int> compareTriplets(vector<int> a, vector<int> b);

int main() {


    return 0;
}

vector<int> compareTriplets(vector<int> a, vector<int> b) {
    vector<int> out(2, 0);
    for (std::size_t i = 0; i < a.size(); i++) {
        if (a[i] > b[i]) {
            out[0]++;
        } else if (a[i] < b[i]) {
            out[1]++;
        }
    }
    return out;
}
