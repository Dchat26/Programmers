def solution(schedules, timelogs, startday):
    answer = 0
    for employ, time in zip(schedules, timelogs):
        deadline = (employ // 100 * 60) + (employ % 100) + 10
        is_TF = 1
        day = startday
        for i in time:
            intime = (i // 100 * 60) + (i % 100)
            if day >= 8:
                day %= 7
            if day == 6 or day == 7:
                day += 1
                continue
            
            if intime <= deadline:
                day += 1
                continue
            else:
                is_TF = 0
                break
        
        if is_TF:
            answer += 1
    
    return answer