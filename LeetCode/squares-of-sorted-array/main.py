def sortedSquares(nums: list[int]) -> list[int]:
    retval = []
    left = 0
    right = len(nums) - 1
    while left <= right:
        lsquare = nums[left]**2
        rsquare = nums[right]**2
        if lsquare > rsquare:
            retval = [lsquare] + retval
            left += 1
        else:
            retval = [rsquare] + retval
            right -= 1
    return retval

if __name__ == '__main__':
    print(sortedSquares([-7, -3, 2, 3, 11]))
