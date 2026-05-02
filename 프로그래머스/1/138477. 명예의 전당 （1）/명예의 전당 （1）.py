def solution(k, score):
    answer = []
    temp = []
    
    tmpsize = 0
    for i in score:
        if tmpsize < k:
            temp.append(i)
            tmpsize += 1
            temp.sort()
        else:
            if i > temp[0]:
                temp[0] = i
                temp.sort()
                
        answer.append(temp[0])
        
    return answer