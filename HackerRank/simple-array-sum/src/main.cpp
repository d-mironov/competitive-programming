#include <iostream>
#include <sstream>
#include <string_view>
#include <vector>

using namespace std;

int simpleArraySum(vector<int> ar) {
    int sum = 0;
    for (int i : ar) {
        sum += i;
    }
    return sum;
}

int main() {

    cout << "Hello world!" << endl;

    return 0;
}
