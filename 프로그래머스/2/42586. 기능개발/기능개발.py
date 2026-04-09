import math

def solution(progresses, speeds):
    answer = []
    
    days_left = [math.ceil((100 - p) / s) for p, s in zip(progresses, speeds)]

    front_day = days_left[0]
    count = 0
    for day in days_left:
        if day <= front_day:
            count += 1
        else:
            answer.append(count)
            count = 1      
            front_day = day

    answer.append(count)
    
    return answer