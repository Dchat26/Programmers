def solution(s):
    answer = 0
    mapping = {')' : '(', ']' : '[', '}' : '{'}
    for x in range(len(s)):
        rotates = s[x:] + s[:x]
        
        temp = []
        is_TF = True
        for i in rotates:
            if i in ('(', '[', '{'):
                temp.append(i)
            else:
                if temp and temp[-1] == mapping[i]:
                    temp.pop()
                else:
                    is_TF = False
                    break
        
        if is_TF and not temp:
            answer += 1
    
    return answer