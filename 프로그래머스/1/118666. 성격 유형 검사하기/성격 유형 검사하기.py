def solution(survey, choices):
    scores = {"R": 0, "T": 0, "C": 0, "F": 0, "J": 0, "M": 0, "A": 0, "N": 0}
    
    for s, c in zip(survey, choices):
        if c < 4:
            scores[s[0]] += (4 - c)
        elif c > 4:
            scores[s[1]] += (c - 4)
            
    answer = ""
    for type1, type2 in [('R', 'T'), ('C', 'F'), ('J', 'M'), ('A', 'N')]:
        if scores[type1] >= scores[type2]:
            answer += type1
        else:
            answer += type2
            
    return answer