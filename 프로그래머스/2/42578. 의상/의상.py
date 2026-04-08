def solution(clothes):
    cloth = {}
    for i in clothes:
        if i[1] not in cloth:
            cloth[i[1]] = 1
        else: cloth[i[1]] += 1
        
    answer = 1
    for a, b in cloth.items():
        answer *= (b + 1)
    
    return answer - 1;