def solution(friends, gifts):
    flen = len(friends)
    
    gt = [[0] * flen for _ in range(flen)]
    fidx = {f: i for i, f in enumerate(friends)}
    for i in gifts:
        g, t = i.split()
        
        gt[fidx[t]][fidx[g]] += 1
        
    gval = []
    for i in friends:
        count = 0
        for j in gt:
            count += j[fidx[i]]
        
        gval.append(count - sum(gt[fidx[i]]))
    
    giftval = [0] * flen
    for i in range(flen - 1):
        ival = gval[i]
        for j in range(i + 1, flen):
            jval = gval[j]
            
            if gt[j][i] > gt[i][j]:
                giftval[i] += 1
            elif gt[j][i] < gt[i][j]:
                giftval[j] += 1
            else:
                if ival > jval:
                    giftval[i] += 1
                elif ival < jval:
                    giftval[j] += 1
    
    return max(giftval)