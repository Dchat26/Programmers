def date_to_days(date_str):
    y, m, d = map(int, date_str.split('.'))
    return (y * 12 * 28) + (m * 28) + d

def solution(today, terms, privacies):
    answer = []
    
    today_days = date_to_days(today)
    
    terms_dict = {}
    for term in terms:
        t_type, t_month = term.split()
        terms_dict[t_type] = int(t_month) * 28
        
    for idx, privacy in enumerate(privacies):
        date, t_type = privacy.split()
        
        privacy_days = date_to_days(date)

        expire_days = privacy_days + terms_dict[t_type]

        if expire_days <= today_days:
            answer.append(idx + 1)
            
    return answer