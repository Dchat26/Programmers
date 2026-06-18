def solution(id_list, report, k):
    idlen = len(id_list)
    
    report = set(report) 
    
    idlist = [[0] * idlen for _ in range(idlen)] 
    iddict = {id_list[i]: i for i in range(idlen)}
    
    for i in report:
        a, b = i.split()
        idlist[iddict[a]][iddict[b]] = 1 
    
    rlist = [0] * idlen
    for i in range(idlen):
        for j in range(idlen):
            if idlist[j][i] == 1:
                rlist[i] += 1
    
    answer = []
    for i in range(idlen):
        temp = 0
        for j in range(idlen):
            if idlist[i][j] == 1 and rlist[j] >= k:
                temp += 1
        answer.append(temp)
        
    return answer