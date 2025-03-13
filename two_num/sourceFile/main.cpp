#include <iostream>
#include <vector>
#include <unordered_map>

std::vector<int> twoSum(std::vector<int>& nums, int target) {
    std::unordered_map<int,int> numMap;
    std::vector<int> result;

    for(int i=0;i<nums.size();++i) {
        int complement = target - nums[i];
        if (numMap.find(complement) !=numMap.end()) {
            result.push_back(i);
            return result;
        }
        numMap[nums[i]] = i;
    }
    return result;
}

int main()
{
    std::vector<int> nums={2,7,11,15};
    int target = 9;
    std::vector<int> result = twoSum(nums,target);
    std::cout<<"Index1:"<<result[0]<<",Index2:"<<result[1]<<std::endl;

    return 0;
}
