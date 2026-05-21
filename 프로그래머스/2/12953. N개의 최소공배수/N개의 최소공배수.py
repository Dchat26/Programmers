import math
from functools import reduce

def solution(arr):
    def lcm(a, b):
        return (a * b) // math.gcd(a, b)
    
    return reduce(lcm, arr)