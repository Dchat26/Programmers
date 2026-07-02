from itertools import product

def solution(numbers, target):
    element = ['+', '-']
    r = len(numbers)
    
    elist = list(product(element, repeat=r))
    
    count = 0
    for i in elist:
        val = 0
        for idx, j in enumerate(i):
            if j == '+':
                val += numbers[idx]
            else:
                val -= numbers[idx]
                
        if val == target:
            count += 1
            
    return count