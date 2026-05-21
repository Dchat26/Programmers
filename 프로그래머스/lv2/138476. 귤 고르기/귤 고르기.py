def solution(k, tangerine):
    max_val = max(tangerine)
    tlist = [0] * (max_val + 1)
    
    for i in tangerine:
        tlist[i] += 1
        
    tlist.sort(reverse=True)
    
    answer = 0
    for i in tlist:
        answer += 1
        k -= i
        
        if k <= 0:
            break
            
    return answer