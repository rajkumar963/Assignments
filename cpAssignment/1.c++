#include <iostream>
using namespace std;
#include <vector>

void printStats(const vector<int>& nums) {
    if (nums.empty()) {
        cout << "List is empty\n";
        return;
    }
    
    int min = nums[0];
    int max = nums[0];
    int sum = 0;
    for (int num : nums) {
        sum += num;
        if (num < min) min = num;
        if (num > max) max = num;
    }
    double average = static_cast<double>(sum) / nums.size();
    
    int mode = nums[0];
    int max_freq = 1;
    for (size_t i = 0; i < nums.size(); ++i) {
        int count = 0;
        for (size_t j = 0; j < nums.size(); ++j) {
            if (nums[j] == nums[i]) ++count;
        }
        if (count > max_freq) {
            mode = nums[i];
            max_freq = count;
        }
    }

    cout << "min, max, sum, average and mode after addition of " << nums.back() << " is " << min << ", " << max << ", " << sum << ", " << average << ", " << mode << ".\n";
}

int main() {
    vector<int> nums;
    int N;
    cin >> N;
    while (N--) {
        int num;
        cin >> num;
        nums.push_back(num);
        printStats(nums);
    }
    return 0;
}