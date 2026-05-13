def solution(s):
    zero = 0
    count = 0
    while s != "1":
        count += 1
        
        current = s.count('0')
        
        zero += current
        left = len(s) - current
                
        s = f"{left:b}"
    
    return [count, zero]