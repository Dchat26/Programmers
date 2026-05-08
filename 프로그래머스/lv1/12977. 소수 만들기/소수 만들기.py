from itertools import combinations

def solution(nums):
    prime = [1] * 3000
    prime[0] = prime[1] = 0
    
    for i in range(2, int(3000 ** 0.5) + 1):
        if prime[i] == 1:
            for j in range(i * i, 3000, i):
                prime[j] = 0
    
    return sum(prime[sum(comb)] for comb in combinations(nums, 3))