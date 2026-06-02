def solution(arr1, arr2):
    m = len(arr1)
    k = len(arr1[0])
    n = len(arr2[0])
    
    answer = []
    for i in range(m):
        temp = []
        for j in range(n):
            val = 0
            for x in range(k):
                val += arr1[i][x] * arr2[x][j]
            temp.append(val)
        answer.append(temp)
        
    return answer