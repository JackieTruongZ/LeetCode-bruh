#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int newLength = 0; // Tracks the new length of the array
        
        // Iterate through the original array
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] != val) {
                nums[newLength] = nums[i]; // Move the valid element to the front
                newLength++; // Increase the new length
            }
        }
        
        // Optional: Resize the vector if you want to remove extra elements
        nums.resize(newLength); // Adjust the size of the vector
        
        return newLength; // Return the new length
    }
};

int main() {
    Solution solution;
    vector<int> nums = {3, 2, 2, 3};
    int val = 3;

    int newLength = solution.removeElement(nums, val);

    cout << "New length: " << newLength << endl;
    cout << "Modified array: ";
    for (int i = 0; i < newLength; i++) {
        cout << nums[i] << " ";
    }
    cout << endl;

    return 0;
}
