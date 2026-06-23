def solution(message, spoiler_ranges):
    words_info = []
    n = len(message)
    i = 0
    while i < n:
        if message[i] == ' ':
            i += 1
            continue
        start = i
        while i < n and message[i] != ' ':
            i += 1
        end = i - 1
        word = message[start:end+1]
        words_info.append((word, start, end))

    spoiler_words = []   
    non_spoiler_set = set()
    
    for idx, (word, w_start, w_end) in enumerate(words_info):
        is_spoiler = False
        for s_start, s_end in spoiler_ranges:
            if max(w_start, s_start) <= min(w_end, s_end):
                is_spoiler = True
                break
        
        if is_spoiler:
            spoiler_words.append((word, idx))
        else:
            non_spoiler_set.add(word)
            
    important_count = 0
    used_important_words = set()
    
    for word, idx in spoiler_words:
        if word in non_spoiler_set:
            continue
        if word in used_important_words:
            continue
        
        important_count += 1
        used_important_words.add(word)
        
    return important_count