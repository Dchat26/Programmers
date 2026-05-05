def solution(name, yearning, photo):
    score = dict(zip(name, yearning))
    
    return [sum(score.get(person, 0) for person in p) for p in photo]