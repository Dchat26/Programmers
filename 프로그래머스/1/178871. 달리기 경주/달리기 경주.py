def solution(players, callings):
    player_to_rank = {player: idx for idx, player in enumerate(players)}
    
    for called_player in callings:
        current_rank = player_to_rank[called_player]
        front_rank = current_rank - 1
        
        front_player = players[front_rank]
        
        players[current_rank], players[front_rank] = players[front_rank], players[current_rank]
        
        player_to_rank[called_player] = front_rank
        player_to_rank[front_player] = current_rank
        
    return players