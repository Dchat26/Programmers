def solution(s):
    answer = 0
    m = 0
    n = 0
    mc = ''
    for i in s:
        if m == 0:
            mc = i
            m += 1
            continue
        
        if mc == i:
            m += 1
        else:
            n += 1
            
        if m == n:
            answer += 1
            m = 0
            n = 0
            
    if m > 0:
        answer += 1
        
    return answer