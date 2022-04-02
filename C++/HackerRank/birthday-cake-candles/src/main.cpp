#include <iostream>
#include <sstream>
#include <string_view>
#include <vector>
#include <map>

using namespace std;

int birthdayCakeCandles(vector<int> candles);
int birthdayCakeCandles_noMap(vector<int> candles);

int main() {
    vector<int> arr1 = {4, 4, 1, 3, 4, 4};
    cout << birthdayCakeCandles(arr1) << endl;
    cout << birthdayCakeCandles_noMap(arr1) << endl;

    return 0;
}

int birthdayCakeCandles(vector<int> candles) {
    int max = 0;
    std::map<int, int> candle_count;
    for (std::size_t i = 0; i < candles.size(); i++) {
        max = (candles[i] > max) ? (candles[i]) : (max);
        if (candle_count.count(candles[i]) > 0) {
            candle_count[candles[i]]++;
        } else {
            candle_count[candles[i]] = 1;
        }
    }
    return candle_count[max];
}

int birthdayCakeCandles_noMap(vector<int> candles) {
    int max = 0, count = 0;
    for (int i: candles) {
        if (i > max) {
            max = i;
            count = 1;
        } else if (i == max) {
            count++;
        }
    }
    return count;
}
