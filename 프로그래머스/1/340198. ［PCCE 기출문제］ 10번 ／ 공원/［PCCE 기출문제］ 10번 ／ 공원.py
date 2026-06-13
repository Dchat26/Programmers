def solution(mats, park):
    row = len(park)
    col = len(park[0])
    
    # 1. 가장 큰 돗자리부터 검사하기 위해 내림차순 정렬 ⭐
    mats.sort(reverse=True)
    
    for size in mats:
        # +1을 해주어야 끄트머리 영역까지 완벽하게 탐색합니다.
        for pr in range(row - size + 1):
            for pc in range(col - size + 1):
                
                # 2. 해당 위치(pr, pc)에서 size 크기의 돗자리를 깔 수 있는지 검사
                is_possible = True
                for a in range(pr, pr + size):       # 시작점을 pr로 명시
                    for b in range(pc, pc + size):   # 시작점을 pc로 명시
                        if park[a][b] != "-1":       # 문제 조건에 따라 문자열 또는 숫자 체크 확인
                            is_possible = False
                            break
                    if not is_possible:
                        break
                
                # 3. 큰 순서대로 검사했으므로, 하나라도 깔 수 있다면 그게 바로 최댓값입니다!
                if is_possible:
                    return size
                
    return -1