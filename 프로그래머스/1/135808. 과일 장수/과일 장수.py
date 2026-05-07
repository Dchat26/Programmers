def solution(k, m, score):
    score.sort(reverse=True)
    
    temp = []
    answer = 0
    for i in score:
        if len(temp) == m:
            answer += min(temp) * m
            temp = []
        
        temp.append(i)
        
    if len(temp) == m:
        answer += min(temp) * m
        
    return answer