def solution(n, m, section):
    count = 0
    end = 0
    for i in section:
        if i > end:
            count += 1
            
            end = i + m - 1
            
    return count