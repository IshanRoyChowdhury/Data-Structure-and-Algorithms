'''
Given a sorted array of unique integers and a target integer, 
return true if there exists a pair of numbers that sum to target, false otherwise. 
This problem is similar to Two Sum. (In Two Sum, the input is not sorted). 
'''
def isPresent(arr, target):
    left = 0
    right = len(arr) - 1
    while left < right:
        sum = arr[left] + arr[right]
        if sum == target:
            return True
        elif sum > target:
            right -= 1
        else:
            left += 1
    return False

nums = [1, 2, 4, 6, 8, 9, 14, 15]
target = 13
print(isPresent(nums, target))
