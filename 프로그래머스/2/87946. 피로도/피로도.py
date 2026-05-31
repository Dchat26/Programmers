from itertools import permutations

def solution(k, dungeons):
    max_val = -1
    for p in permutations(dungeons):
        cost = k
        count = 0
        for i in p:
            if i[0] <= cost:
                count += 1
                cost -= i[1]
            else:
                break
        
        max_val = max(max_val, count)
    
    return max_val