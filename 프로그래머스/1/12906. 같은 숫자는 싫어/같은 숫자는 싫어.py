def solution(arr):
    answer = []
    current = -1
    for i in arr:
        if current == -1:
            current = i
        elif current != i:
            answer.append(current)
            current = i
    answer.append(i)
            
    return answer