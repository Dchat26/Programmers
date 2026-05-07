def solution(babbling):
    answer = 0
    for word in babbling:
        if "ayaaya" in word or "yeye" in word or "woowoo" in word or "mama" in word:
            continue
                
        word = word.replace("aya", " ")
        word = word.replace("ye", " ")
        word = word.replace("woo", " ")
        word = word.replace("ma", " ")
        
        if len(word.strip()) == 0:
            answer += 1
            
    return answer