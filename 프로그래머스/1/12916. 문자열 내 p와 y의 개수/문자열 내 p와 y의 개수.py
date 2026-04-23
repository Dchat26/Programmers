def solution(s):
    ycount = 0
    pcount = 0
    for i in s:
        if i == 'p' or i == 'P':
            pcount += 1
        elif i == 'y' or i == 'Y':
            ycount += 1
            
    return ycount == pcount