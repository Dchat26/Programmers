import sys
import heapq

def solve():
    input = sys.stdin.readline
    
    W, H = map(int, input().split())
    grid = [list(input().rstrip()) for _ in range(W)]
    
    start_a, start_b = -1, -1
    for i in range(W):
        for j in range(H):
            if grid[i][j] == 'S':
                start_a, start_b = i, j
                break
        if start_a != -1:
            break
            
    visited = [[False] * H for _ in range(W)]
    visited[start_a][start_b] = True
    
    pq = []
	
    def get_priority(char):
        if char == 'E': return 0
        if char == 'P': return 1
        return 2
        
    da = [-1, 1, 0, 0]
    db = [0, 0, -1, 1]
    
    for i in range(4):
        na = start_a + da[i]
        nb = start_b + db[i]
        if 0 <= na < W and 0 <= nb < H and not visited[na][nb]:
            visited[na][nb] = True
            heapq.heappush(pq, (get_priority(grid[na][nb]), na, nb))
            
    danger_point = 0
    while pq:
        priority, a, b = heapq.heappop(pq)
        target = grid[a][b]
        
        if target == 'E':
            break
            
        p_count = 0
        for dr in [-1, 0, 1]:
            for dc in [-1, 0, 1]:
                if dr == 0 and dc == 0:
                    continue
									
                na, nb = a + dr, b + dc
                if 0 <= na < W and 0 <= nb < H:
                    if grid[na][nb] == 'P':
                        p_count += 1
                        
        if target == '0':
            danger_point += p_count
        elif target == 'P':
            danger_point += (p_count - 3)
            
        for i in range(4):
            na = a + da[i]
            nb = b + db[i]
            if 0 <= na < W and 0 <= nb < H and not visited[na][nb]:
                visited[na][nb] = True
                heapq.heappush(pq, (get_priority(grid[na][nb]), na, nb))
                
    sys.stdout.write(str(max(0, danger_point)) + "\n")

if __name__ == "__main__":
    solve()