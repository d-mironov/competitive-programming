# 'guess(int)' is not defined here. You can only test the code on LeetCode

def guessNumber(n) -> int:
    """
    :type n: int
    :rtype: int
    """
    left = 0
    right = n
    while (left <= right):
        mid = (left + right) // 2
        res = guess(mid)
        if res == -1:
            right = mid - 1
        elif res == 1:
            left = mid + 1
        else:
            return mid
    return -1


if __name__ == "__main__":
    pass
