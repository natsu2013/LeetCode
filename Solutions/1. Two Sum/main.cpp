#include <iostream>
#include <vector>
#include <unordered_map>

class Solution
{
public: 
	Solution()
	{
		std::ios::sync_with_stdio(false);
		std::cin.tie(NULL);
		std::cout.tie(NULL);
	}
	std::vector<int> twoSum(std::vector<int>& nums, const int& target)
	{
		std::unordered_map<int, int> map; 
		for (int i = 0; i < nums.size(); i++)
		{
			int complement = target - nums[i];
			if (map.find(complement) != map.end())
			{
				return { map[complement], i };
			}
			map[nums[i]] = i;
		}
		return {};
	}
};

int main()
{
	std::vector<int> nums{ 1,2,3,5,7,8,9,2,3 };
	int target = 10;
	Solution s;
	std::vector<int>ind = s.twoSum(nums, target);
	std::cout << ind[0] << " " << ind[1];
	return 0;
}
