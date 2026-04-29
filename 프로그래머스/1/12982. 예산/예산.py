def solution(d, budget):
    d.sort()
    
    for idx, val in enumerate(d):
        budget -= val;
        
        if budget < 0:
            return idx;
        
    return len(d)