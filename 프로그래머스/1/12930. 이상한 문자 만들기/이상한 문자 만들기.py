def solution(s):
    answer = []
    for word in s.split(" "):
        nword = "".join(c.upper() if i % 2 == 0 else c.lower() for i, c in enumerate(word))
        answer.append(nword)
        
    return " ".join(answer)