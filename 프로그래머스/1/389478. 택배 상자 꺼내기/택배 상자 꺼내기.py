def get_pos(num, w):
    X = num - 1
    row = X // w
    
    if row % 2 == 1:
        col = (w - 1) - (X % w)
    else:
        col = X % w
        
    return row, col

def solution(n, w, num):
    target_row, target_col = get_pos(num, w)
    
    total_rows = (n // w) + (1 if n % w != 0 else 0)
    
    answer = 0
    
    for r in range(target_row, total_rows):
        if r % 2 == 1:
            current_box_num = r * w + (w - 1 - target_col) + 1
        else:
            current_box_num = r * w + target_col + 1
            
        if current_box_num <= n:
            answer += 1
            
    return answer