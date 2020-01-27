class Solution {
public:
	vector<int> twoSum(vector<int>& nums, int target) 
	{
		vector<int>  result;
		map<int, int> hashTable;
		try
		{
			if (nums.size() < 2)
			{
				return result;
			}

			int index = 0;
			for (auto item : nums)
			{
				auto searchResult = hashTable.find(target - item);

				if (searchResult != hashTable.end())
				{
					result.push_back(searchResult->second);
					result.push_back(index);
					break;
				}
				else
				{
					hashTable.insert(pair<int, int>(item, index));
					index++;
				}
			}

		}
		catch (exception ex)
		{
			cout << ex.what();
		}

		return result;
	}
};