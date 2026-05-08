def solution(s, skip, index):
    answer = ""
    for char in s:
        count = 0
        while count < index:
            char = chr(ord(char) + 1)
            
            if char > 'z':
                char = 'a'
            
            if char not in skip:
                count += 1
                
        answer += char
        
    return answer