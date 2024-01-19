def merge(nums1: list[int], m: int, nums2: list[int], n: int) -> None:
    # two pointer technique
    p1, p2 = 0, 0
    print(nums1)
    print(nums2)
    for _ in range(n + m):
        n1, n2 = nums1[p1], nums2[p2]
        if n1 >= m:
            nums1[p1] = n2
            p1 += 1
            p2 += 1
        elif n2 < n1:
            nums1.insert(p1, n2)
            p2 += 1
        else:
            p1 += 1
        print(n1, n2)
        print(nums1)
        print(nums2)




if __name__ == '__main__':
    nums1 = [1, 2, 3, 0, 0, 0]
    nums2 = [2, 5, 6]
    m, n = 3, 3
    merge(nums1, m, nums2, n)
    print(nums1)

    # p1 = 0, p2 = 0
    # [2, 6, 9, 0, 0, 0]
    # [3, 4, 10]

    # > [

