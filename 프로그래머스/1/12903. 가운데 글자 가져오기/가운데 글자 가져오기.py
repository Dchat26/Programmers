def solution(s):
    slen = len(s)
    
    return s[slen // 2] if slen % 2 == 1 else s[slen // 2 - 1:slen // 2 + 1]