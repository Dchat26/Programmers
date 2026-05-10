def solution(lottos, win_nums):
    zero_count = lottos.count(0)
    
    match_count = len(set(lottos) & set(win_nums))
    
    rank = [6, 6, 5, 4, 3, 2, 1]
    
    return [rank[match_count + zero_count], rank[match_count]]