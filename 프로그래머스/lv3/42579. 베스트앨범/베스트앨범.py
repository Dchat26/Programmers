from collections import defaultdict

def solution(genres, plays):
    answer = []
    
    genre_plays = defaultdict(int)
    genre_songs = defaultdict(list) 
    
    for i, (g, p) in enumerate(zip(genres, plays)):
        genre_plays[g] += p
        genre_songs[g].append((p, i))
        
    sorted_genres = sorted(genre_plays.items(), key=lambda x: x[1], reverse=True)
    
    for genre, _ in sorted_genres:
        songs = genre_songs[genre]
        
        songs.sort(key=lambda x: (-x[0], x[1]))

        for play, i in songs[:2]:
            answer.append(i)
            
    return answer