#include <cstdio>
#include <iostream>
#include <sstream>
#include <string>
#include <string_view>
#include <vector>

using namespace std;

string timeConversion(string s);

int main() {

    cout << timeConversion("12:01:00PM") << endl;
    cout << timeConversion("12:01:00AM") << endl;
    cout << timeConversion("07:55:00AM") << endl;
    cout << timeConversion("07:55:00PM") << endl;

    return 0;
}

string timeConversion(string s) {
    char *out = (char *) malloc(12);
    int hour, min, sec;
    char *am_pm = (char *) malloc(3);
    std::sscanf(s.c_str(), "%d:%d:%d%2s\n", &hour, &min, &sec, am_pm); 
    if (s.find("AM") != -1) {
        hour = (hour == 12) ? 0 : hour;
    } else {
        hour = (hour == 12) ? 12 : hour+12;
    }
    sprintf(out, "%02d:%02d:%02d", hour, min, sec); 
    return string(out);
}
