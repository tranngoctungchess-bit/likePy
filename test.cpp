//
// Created by Admin on 5/1/2026.
//
#import "likePy.h"
class Solution {
public:
    list<int> twoSum(list<int>& nums, int target) {
        dict<int, int> seen;

        for (int i = 0; i < len(nums); i++) {
            int complement = target - nums[i];

            if (seen.find(complement) != seen.end()) {
                return {seen[complement], i};
            }

            seen[nums[i]] = i;
        }

        return {};
    }
};

MAIN {
    return 0;
}