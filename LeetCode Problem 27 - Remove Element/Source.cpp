class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int lastNonValFoundAt = 0;
		for (int cur = 0; cur < nums.size(); cur++)
		{
			if (nums[cur] != val)
			{
				swap(nums[lastNonValFoundAt++], nums[cur]);
			}
		}
		return lastNonValFoundAt;
	}
};