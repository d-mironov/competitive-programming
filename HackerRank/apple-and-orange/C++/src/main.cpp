#include <iostream>
#include <sstream>
#include <string_view>
#include <vector>

using namespace std;

void countApplesAndOranges(int s, int t, int a, int b, vector<int> apples, vector<int> oranges);

int main() {
    vector<int> apples = {2, 3, -4};
    vector<int> oranges = {3, -2, -4};
    countApplesAndOranges(7, 10, 4, 12, apples, oranges);


    return 0;
}

void countApplesAndOranges(int s, int t, int a, int b, vector<int> apples, vector<int> oranges) {
    // Counter for apples and oranges
    int fo = 0, fa = 0;
    // Count apples on house
    for (std::size_t i = 0; i < apples.size(); i++) {
        int d1 = apples[i] + a;
        if (d1 >= s && d1 <= t)
            fa++;
    }
    // Count oranges on house
    for (std::size_t i = 0; i < oranges.size(); i++) {
        int d2 = oranges[i] + b;
        if (d2 >= s && d2 <= t)
            fo++;
    }
    std::cout << fa << std::endl;
    std::cout << fo << std::endl;
}
