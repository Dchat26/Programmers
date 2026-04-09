def solution(prices):
    length = len(prices)
    answer = [0] * length 
    
    stack = [] 

    for i, price in enumerate(prices):
        while stack and prices[stack[-1]] > price:
            past_time = stack.pop() 
            answer[past_time] = i - past_time 
            
        stack.append(i)

    while stack:
        past_time = stack.pop()
        answer[past_time] = length - 1 - past_time

    return answer