def solution(answers):
    num1 = [1, 2, 3, 4, 5]
    num2 = [2, 1, 2, 3, 2, 4, 2, 5]
    num3 = [3, 3, 1, 1, 2, 2, 4, 4, 5, 5]
    
    total = [0] * 3
    
    for i, ans in enumerate(answers):
        if ans == num1[i % len(num1)]:
            total[0] += 1
        if ans == num2[i % len(num2)]:
            total[1] += 1
        if ans == num3[i % len(num3)]:
            total[2] += 1
    
    max_val = max(total)
    
    return [i + 1 for i, v in enumerate(total) if v == max_val]