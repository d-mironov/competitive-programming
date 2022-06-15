def search(nums, target) -> int:
    """
    :type nums: List[int]
    :type target: int
    :rtype: int
    """
    l: int = 0
    r: int = len(nums) - 1
    while (l < r):
        mid: int = l + ((r - l) // 2)
        if nums[mid] == target:
            return mid
        elif nums[mid] > target:
            r = mid - 1
        else:
            l = mid + 1
    return l if nums[l] == target else -1


if __name__ == "__main__":
    print("Binary Search")
    print(search([1, 2, 3, 4, 5], 2))
    print(search([1, 2, 3, 4, 5], 1))
    print(search([1, 2, 3, 4, 5], 3))
    print(search([1, 2, 3, 4, 5], 4))
    print(search([1, 2, 3, 4, 5], 5))
    print(search([1, 2, 3, 4, 5], 10))
