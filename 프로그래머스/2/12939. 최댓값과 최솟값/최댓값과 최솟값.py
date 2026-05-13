def solution(s):
    slist = list(map(int, s.split(' ')))
    
    return " ".join([str(min(slist)), str(max(slist))])