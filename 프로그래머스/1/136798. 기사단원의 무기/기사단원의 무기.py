def solution(number, limit, power):
    total = 0
    for i in range(1, number + 1):
        count = 0
        for j in range(1, int(i ** 0.5) + 1):
            if i % j == 0:
                count += 1
                
                if j != (i // j):
                    count += 1
                
        if count > limit:
            total += power
        else:
            total += count
            
    return total