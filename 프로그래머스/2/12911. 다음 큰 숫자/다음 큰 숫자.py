def solution(n):
    ncount = f"{n:b}".count('1')
    target = n
    while True:
        target += 1
        
        tcount = f"{target:b}".count('1')
        
        if ncount == tcount:
            return target