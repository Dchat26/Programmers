def solution(wallpaper):
    x_coords = []
    y_coords = []
    
    for i in range(len(wallpaper)):
        for j in range(len(wallpaper[i])):
            if wallpaper[i][j] == "#":
                x_coords.append(i)
                y_coords.append(j)
                
    return [min(x_coords), min(y_coords), max(x_coords) + 1, max(y_coords) + 1]