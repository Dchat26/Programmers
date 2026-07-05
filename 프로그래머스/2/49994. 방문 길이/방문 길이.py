def solution(dirs):
    move = {'U': (0, 1), 'D': (0, -1), 'R': (1, 0), 'L': (-1, 0)}
    visited_paths = set()
    x, y = 0, 0
    for d in dirs:
        dx, dy = move[d]
        nx, ny = x + dx, y + dy
        
        if -5 <= nx <= 5 and -5 <= ny <= 5:
            path = ((x, y), (nx, ny))
            reverse_path = ((nx, ny), (x, y))
            
            visited_paths.add(path)
            visited_paths.add(reverse_path)

            x, y = nx, ny
            
    return len(visited_paths) // 2