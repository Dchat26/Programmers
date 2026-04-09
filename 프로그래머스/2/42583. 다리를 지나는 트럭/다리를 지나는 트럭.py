from collections import deque

def solution(bridge_length, weight, truck_weights):
    time = 0
    bridge = deque([0] * bridge_length) 
    trucks = deque(truck_weights)
    
    current_weight = 0
    
    while bridge:
        time += 1
        
        exited = bridge.popleft()
        current_weight -= exited
        
        if trucks:
            if current_weight + trucks[0] <= weight:
                entered = trucks.popleft()
                bridge.append(entered)
                current_weight += entered
            else:
                bridge.append(0)
                
    return time