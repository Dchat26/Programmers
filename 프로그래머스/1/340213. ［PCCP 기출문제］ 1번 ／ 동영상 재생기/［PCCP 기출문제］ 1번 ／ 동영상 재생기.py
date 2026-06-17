def solution(video_len, pos, op_start, op_end, commands):
    tm, ts = map(int, video_len.split(':'))
    total = tm * 60 + ts
    
    sm, ss = map(int, op_start.split(':'))
    stotal = sm * 60 + ss
    
    em, es = map(int, op_end.split(':'))
    etotal = em * 60 + es
    
    pm, ps = map(int, pos.split(':'))
    ptotal = pm * 60 + ps
    
    for i in commands:
        if ptotal >= stotal and ptotal <= etotal:
            ptotal = etotal
            
        if i == "prev":
            ptotal = max(ptotal - 10, 0)
        else:
            ptotal = min(ptotal + 10, total)
    if ptotal >= stotal and ptotal <= etotal:
        ptotal = etotal
        
    m = ptotal // 60
    s = ptotal % 60
    
    return f"{m:0>2}:{s:0>2}"