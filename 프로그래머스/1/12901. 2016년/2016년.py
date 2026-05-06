import datetime

def solution(a, b):
    day_name = ["MON", "TUE", "WED", "THU", "FRI", "SAT", "SUN"]
    
    return day_name[datetime.datetime(2016, a, b).weekday()]