def solution(s):
    slist = list(s)
    
    idx = 0
    for index, val in enumerate(slist):
        if val == ' ':
            idx = 0
            continue
        
        if idx % 2 == 0:
            slist[index] = val.upper()
        else:
            slist[index] = val.lower()
            
        idx += 1
    
    return "".join(slist)