def solution(cacheSize, cities):
    if cacheSize == 0:
        return len(cities) * 5
    
    cache = []
    times = 0
    for i in cities:
        target = i.lower()
        if target in cache:
            cache.remove(target)
            cache.append(target)
            times += 1
        else:
            if len(cache) >= cacheSize:
                cache.pop(0)
            cache.append(target)
            times += 5
    
    return times