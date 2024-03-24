class Solution:
    def containsDuplicate(self, nums: List[int]) -> bool:
        # to keep track of all elements seen/checked 
        seen = set()

        # for all numbers, check if in seen set, 
        # if not then add it, 
        # if yes then means number has been repeated 
        for num in nums:
            if num in seen:
                return True
            seen.add(num)
        
        # default return false means no repetiiton found 
        return False        
        
