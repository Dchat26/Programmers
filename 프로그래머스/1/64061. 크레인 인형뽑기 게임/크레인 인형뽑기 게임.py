def solution(board, moves):
    answer = 0
    temp = []
    
    for i in moves:
        for j in range(len(board)):
            if board[j][i - 1] != 0:
                doll = board[j][i - 1]
                board[j][i - 1] = 0
                
                if temp and temp[-1] == doll:
                    temp.pop()
                    answer += 2
                else:
                    temp.append(doll)
                    
                break
                
    return answer