def solution(numbers):
    return sum(i for i in range(0, 9 + 1) if not i in numbers)