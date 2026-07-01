def solution(s):
    s_groups = s[2:-2].split("},{")
    
    sslist = []
    for group in s_groups:
        m_list = list(map(int, group.split(',')))
        sslist.append(m_list)
        
    sslist.sort(key=len)
    
    answer = []
    for i in sslist:
        for j in i:
            if j not in answer:
                answer.append(j)
                
    return answer