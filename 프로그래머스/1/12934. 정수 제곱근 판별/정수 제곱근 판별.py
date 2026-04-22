def solution(n):
    root = n ** 0.5
    
    if root % 1 == 0:
        return (root + 1) ** 2
    else:
        return - 1;