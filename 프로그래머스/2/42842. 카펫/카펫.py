def solution(brown, yellow):
    total = brown + yellow
    for y in range(1, int(yellow ** 0.5) + 1):
        if yellow % y == 0:
            x = yellow // y
            
            if (x + 2) * (y + 2) == total:
                return [x + 2, y + 2]