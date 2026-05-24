def solution(elements):
    n = len(elements)
    
    ex = elements + elements
    
    answer = set()
    for i in range(n):
        current = 0
        for j in range(n):
            current += ex[i + j]
            answer.add(current)
    
    return len(answer)