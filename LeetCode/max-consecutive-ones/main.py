def findMaxConsecutiveOnes(nums: list[int]) -> int:
    # [1, 1, 0, 1, 1, 1]
    max_consec = 0
    tmp = 0
    for num in nums:
        if num == 1:
            tmp += 1
        else:
            max_consec = max(max_consec, tmp)
            tmp = 0
    return max(max_consec, tmp)

if __name__ == '__main__':
    print(findMaxConsecutiveOnes([1, 1, 0, 1, 1, 1]))
