def solution(n):
    prev, curr = 1, 2
    
    if n == 1: return 1

    for _ in range(3, n + 1):
        prev, curr = curr, (prev + curr) % 1234567
        
    return curr