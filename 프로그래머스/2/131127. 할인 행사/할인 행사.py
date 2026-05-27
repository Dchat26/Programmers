def solution(want, number, discount):
    wantdict = dict(zip(want, number))
    
    total = sum(number)
    answer = 0
    for i in range(len(discount) - total + 1):
        tempdict = {}
        for j in range(total):
            target = discount[i + j]
            tempdict[target] = tempdict.get(target, 0) + 1
        
        is_TF = 1
        for j in want:
            if wantdict[j] != tempdict.get(j, 0):
                is_TF = 0
                break
                
        if is_TF:
            answer += 1
            
    return answer