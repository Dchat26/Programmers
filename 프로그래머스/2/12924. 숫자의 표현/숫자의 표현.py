def solution(n):
    answer = 0
    for i in range(1, n + 1):
        target = i
        temp = 0
        while (temp <= n):
            if temp == n:
                answer += 1
                break
                
            temp += target
            target += 1
            
    return answer