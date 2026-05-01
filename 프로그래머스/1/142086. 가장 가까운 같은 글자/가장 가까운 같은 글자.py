def solution(s):
    alpidx = [-1] * 26
    
    answer = []
    for i, char in enumerate(s):
        charidx = ord(char) - ord('a')
        
        if alpidx[charidx] == -1:
            answer.append(-1)
        else:
            answer.append(i - alpidx[charidx])
            
        alpidx[charidx] = i
        
    return answer