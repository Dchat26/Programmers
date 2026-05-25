def solution(n, words):
    wordlist = set()
    wordlist.add(words[0])
    
    for i in range(1, len(words)):
        current = words[i]
        prev_word = words[i - 1]
        
        if prev_word[-1] != current[0] or current in wordlist:
            return [i % n + 1, i // n + 1]
        
        wordlist.add(current)
    
    return [0, 0]