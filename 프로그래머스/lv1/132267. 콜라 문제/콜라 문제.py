def solution(a, b, n):
    return (n - b) // (a - b) * b if n >= a else 0