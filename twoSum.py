from typing import List

class Solution:

    def twoSum(self, nums: List[int], target: int) -> List[int]:
        # 1. make dictionary the its keys are the elements of the list nums
        hashkung = dict()
        counter = 0
        for n in nums:
            hashkung[n] = counter
            counter += 1
        print(hashkung)
        # 2. loop to find the complementary
        counter = 0
        for n in nums:
            # print(counter)
            complementary = target - n
            # print(n,complementary)
            if ((complementary in hashkung) and (complementary != target)):
                return [counter, hashkung[complementary]]
            counter += 1
            
a = Solution()
print(a.twoSum([3,3],6))