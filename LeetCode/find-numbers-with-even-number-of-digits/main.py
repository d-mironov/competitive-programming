def findNumbers(nums: list[int]) -> int:
    count = 0
    for num in nums:
        digits = 0
        while num > 0:
            digits += 1
            num //= 10 
        count += 1 if digits % 2 == 0 else 0
    return count

if __name__ == '__main__':
    print(findNumbers([555, 901, 482, 1771]))
