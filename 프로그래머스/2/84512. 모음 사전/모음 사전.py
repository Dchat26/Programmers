from itertools import product

def solution(word):
    element = ['A', 'E', 'I', 'O', 'U']
    maxlen = 5
    
    all_words = []
    
    for i in range(1, maxlen + 1):
        for j in product(element, repeat=i):
            all_words.append("".join(j))
            
    all_words.sort()

    return all_words.index(word) + 1