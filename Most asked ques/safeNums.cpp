#include <iostream>
#include <vector>

using namespace std;

vector<int> findSafeNumbers(vector<int>& numbers) {
    int totalSum = 0;
    for (int num : numbers) {
        totalSum += num;
    }
    // 0 1 2 3 4 5 6 7 8
    // i j
    vector<int> safeNumbers;
    for (int i = 0; i < 9; ++i) {
        for (int j = i + 1; j < 9; ++j) {
            if (numbers[i] + numbers[j] == totalSum - 100) {
                for (int k = 0; k < 9; ++k) {
                    if (k != i && k != j) {
                        safeNumbers.push_back(numbers[k]);
                    }
                }
                return safeNumbers;
            }
        }
    }
    
    return safeNumbers;
}

int main() {
    vector<int> nums(9);
    for (int i = 0; i < 9; ++i) {
        cin >> nums[i];
    }
    
    vector<int> safeNums = findSafeNumbers(nums);
    
    for (int num : safeNums) {
        cout << num << endl;
    }
    
    return 0;
}