class Solution {
public:
	int removeDuplicates(vector<int>& nums) {
		vector<int>::iterator current = nums.begin();
		vector<int>::iterator last = current+1;
		vector<int>::iterator temp;
		bool isContainsDuplicate = false;

        if (nums.size() <= 1)
			return nums.size();
        
		while (last != nums.end())
		{
			if (*current == *last)
			{
				isContainsDuplicate = true;
				last++;
			}
			else
			{
				if (isContainsDuplicate)
				{
					nums.erase(current + 1, last);
					isContainsDuplicate = false;
					last = current + 1;
				}
				else
				{
					current++;
					last++;
				}
			}
		}

		if (isContainsDuplicate)
		{
			nums.erase(current + 1, last);
		}
		return nums.size();
	}
};