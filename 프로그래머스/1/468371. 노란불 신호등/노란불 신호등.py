import math

def solution(signals):
    periods = [sum(s) for s in signals]
    
    for t in range(1, 5000000):
        all_yellow = True
        
        for i in range(len(signals)):
            G, Y, R = signals[i]
            T = periods[i]
            
            remain = t % T
            if remain == 0:
                remain = T
                
            if not (G < remain <= G + Y):
                all_yellow = False
                break
                
        if all_yellow:
            return t
            
    return -1