def solution(s, n):
    slist = list(s)
    
    for i, c in enumerate(slist):
        if c == ' ': 
            continue
            
        if c.islower():
            slist[i] = chr((ord(c) - ord('a') + n) % 26 + ord('a'))
        elif c.isupper():
            slist[i] = chr((ord(c) - ord('A') + n) % 26 + ord('A'))

    return "".join(slist)