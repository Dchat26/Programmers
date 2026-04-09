def solution(s):
    temp = []
    for i in s:
        if i == '(':
            temp.append(i)
        else:
            if temp:
                temp.pop()
            else:
                return False
    
    if temp:
        return False
    else: 
        return True