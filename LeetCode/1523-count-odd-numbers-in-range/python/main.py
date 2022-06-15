def countOdds(low: int, high: int) -> int:
    """
    Count all odd numbers between `high` and `low`.
    `high` and `low` included.

    :type low: int
    :type high: int
    :rtype: int
    """
    low = low if low % 2 != 0 else low + 1
    high = high if high % 2 != 0 else high - 1
    return (high - low) // 2 + 1


if __name__ == "__main__":
    print(countOdds(3, 7))
    print(countOdds(8, 10))
