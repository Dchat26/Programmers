def solution(park, routes):
    H = len(park)
    W = len(park[0])
    
    r, c = 0, 0
    for i in range(H):
        if 'S' in park[i]:
            r = i
            c = park[i].index('S')
            break

    directions = {'N': (-1, 0), 'S': (1, 0), 'W': (0, -1), 'E': (0, 1)}
    
    for route in routes:
        direction, dist = route.split()
        dist = int(dist)
        
        dr, dc = directions[direction]
        temp_r, temp_c = r, c
        is_valid = True
        
        for _ in range(dist):
            temp_r += dr
            temp_c += dc
            
            if not (0 <= temp_r < H and 0 <= temp_c < W) or park[temp_r][temp_c] == 'X':
                is_valid = False
                break
                
        if is_valid:
            r, c = temp_r, temp_c
            
    return [r, c]