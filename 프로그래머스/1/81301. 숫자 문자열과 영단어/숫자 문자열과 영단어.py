def solution(s):
    num = ["zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"]
    
    for idx, c in enumerate(num):
        s = s.replace(c, str(idx))
        
    return int(s)