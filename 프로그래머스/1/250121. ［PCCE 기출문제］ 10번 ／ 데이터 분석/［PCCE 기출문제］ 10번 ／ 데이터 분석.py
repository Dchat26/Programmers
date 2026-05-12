def solution(data, ext, val_ext, sort_by):
    col = {"code": 0, "date": 1, "maximum": 2, "remain": 3}
    
    filtered_data = [item for item in data if item[col[ext]] < val_ext]
    
    filtered_data.sort(key=lambda x: x[col[sort_by]])
    
    return filtered_data