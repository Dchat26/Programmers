def solution(bandage, health, attacks):
    max_health = health
    bt, bh, bb = bandage[0], bandage[1], bandage[2]
    
    attack_dict = {time: damage for time, damage in attacks}
    last_attack_time = attacks[-1][0]
    
    combo = 0
    for current_time in range(1, last_attack_time + 1):
        if current_time in attack_dict:
            health -= attack_dict[current_time]
            combo = 0
            
            if health <= 0:
                return -1
        else:
            combo += 1
            health = min(max_health, health + bh)
            
            if combo == bt:
                health = min(max_health, health + bb)
                combo = 0
                
    return health