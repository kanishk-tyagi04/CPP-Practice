#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> result;

        for (int i = 0; i < nums.size(); i++) {
            for (int j = i + 1; j < nums.size(); j++) {

                if (nums[i] + nums[j] == target) {
                    result.push_back(i);
                    result.push_back(j);
                    return result;
                }
            }
        }

        return result;
    }
};

int main() {
    vector<int> vec;
    int num;
    int size;

    cout << "Enter the size of vector: " << endl;
    cin >> size;

    cout << "Enter the elements: " << endl;

    for (int i = 0; i < size; i++) {
        int element;
        cin >> element;
        vec.push_back(element);
    }

    cout << "Enter the target number: " << endl;
    cin >> num;

    Solution sol;

    vector<int> result = sol.twoSum(vec, num);

    if (result.size() == 0) {
        cout << "No pair found" << endl;
    } 
    else {
        cout << "Pair found at indices: "
             << result[0] << " and " << result[1] << endl;
    }

    return 0;
}