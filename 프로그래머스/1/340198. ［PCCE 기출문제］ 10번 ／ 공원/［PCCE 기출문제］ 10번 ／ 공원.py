def solution(mats, park):
    row = len(park)
    col = len(park[0])
    
    mats.sort(reverse=True)
    
    for size in mats:
        for pr in range(row - size + 1):
            for pc in range(col - size + 1):
                
                is_possible = True
                for a in range(pr, pr + size):     
                    for b in range(pc, pc + size): 
                        if park[a][b] != "-1":    
                            is_possible = False
                            break
                    if not is_possible:
                        break
                        
                if is_possible:
                    return size
                
    return -1
