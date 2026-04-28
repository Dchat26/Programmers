def gcd(a: int, b: int):
    while b != 0:
        r = a % b
        a = b
        b = r
        
    return a

def solution(n, m):
    g = gcd(n, m)
    l = (n / g) * m
    
    return [g, l]