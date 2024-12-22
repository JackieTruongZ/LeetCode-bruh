#include <iostream>
#include <vector>

using namespace std;

class Solution
{
public:
    void merge(vector<int> &nums1, int m, vector<int> &nums2, int n)
    {
        vector<int> nums1_copy(nums1.begin(), nums1.begin() + m);
        
        int i = 0, j = 0, k = 0;

        while (i < m && j < n)
        {
            if (nums1_copy[i] <= nums2[j])
            {
                nums1[k++] = nums1_copy[i++];
            }
            else
            {
                nums1[k++] = nums2[j++];
            }
        }

        while (i < m)
        {
            nums1[k++] = nums1_copy[i++];
        }

        while (j < n)
        {
            nums1[k++] = nums2[j++];
        }
    }
};

int main()
{
    Solution solution;
    vector<int> nums1 = {1, 2, 3, 0, 0, 0};
    vector<int> nums2 = {2, 5, 6};
    int m = 3;
    int n = 3;

    solution.merge(nums1, m, nums2, n);

    for (int num : nums1)
    {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
