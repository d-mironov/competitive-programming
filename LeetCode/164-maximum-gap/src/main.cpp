#include <algorithm>
#include <climits>
#include <cstddef>
#include <iostream>
#include <vector>
#include <map>

using std::vector;
using std::map;

void print_vec(vector<int> nums) {
    std::cout << '{';
    for (auto e : nums) {
        std::cout << e << ' ';
    }
    std::cout << "}\n";
}

int maximum_gap_bad(vector<int>& nums);
int maximum_gap(vector<int>& nums);


int main() {
    vector<int> vec = {3, 6, 9, 1};
    std::cout << maximum_gap_bad(vec) << std::endl;
    std::cout << maximum_gap(vec) << std::endl;
}

int maximum_gap(vector<int>& nums) {
    const int size = nums.size();
    if (size < 2) {
        return 0;
    }
    // Find minimum and maximum of array
    int max = *std::max_element(nums.begin(), nums.end());
    int min = *std::min_element(nums.begin(), nums.end());
    if (max == min) {
        return 0;
    }
    // Calculate average gap between two adjacent elements
    double gap = (max - min) / double(size - 1);
    // Create buckets
    vector<int> min_bucket(size, INT_MAX), max_bucket(size, INT_MIN);
    
    for (size_t i = 0; i < size; ++i) {
        int num = nums[i];
        size_t idx = (num - min) / gap;
        min_bucket[idx] = std::min(min_bucket[idx], num);
        max_bucket[idx] = std::max(max_bucket[idx], num);
    }
    int max_gap = 0;
    int previous_max = max_bucket[0];
    for (size_t i = 1; i < size; ++i) {
        if (min_bucket[i] == INT_MAX) {
            continue;
        }
        max_gap = std::max(max_gap, min_bucket[i] - previous_max);
        previous_max = max_bucket[i];
    }

    return max_gap;
}

// Using counting sort (inefficient)
int maximum_gap_bad(vector<int>& nums) {
    if (nums.size() < 2) {
        return 0;
    }
    int max = nums[0];
    int retval = 0;
    // Find maximum element
    for (auto e : nums) {
        max = (e > max) ? e : max;
    }
    // Perform counting sort
    map<int, int> count;
    for (auto e : nums) {
        count[e]++;
    }
    nums.clear();
    for (auto it : count) {
        int cnt = it.second;
        while (cnt--) {
            nums.push_back(it.first);
        }
    }

    // Find maximum gap
    int max_gap = 0;
    for (size_t i = 0; i < nums.size() - 1; ++i) {
        int gap = nums[i + 1] - nums[i];
        max_gap = (gap > max_gap) ? gap : max_gap;
    }
    return max_gap;
}
