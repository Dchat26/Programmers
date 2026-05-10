def solution(keymap, targets):
    answer = []
    for sentence in targets:
        count = 0
        possible = True
        for char in sentence:
            klist = []
            for key in keymap:
                if char in key:
                    klist.append(key.index(char) + 1)
                    
            if not klist:
                possible = False
                break
                    
            count += min(klist)
        
        if possible:
            answer.append(count)
        else:
            answer.append(-1)
        
    return answer