def solution(citations):
    citations.sort()
    n = len(citations)
    
    for idx, val in enumerate(citations):
        if val >= n - idx:
            return n - idx
    return 0