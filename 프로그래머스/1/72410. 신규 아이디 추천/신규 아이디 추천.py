import re

def solution(new_id):
    st = new_id.lower()
    
    st = re.sub(r'[^a-z0-9\-_.]', '', st)
    
    st = re.sub(r'\.+', '.', st)
    
    st = st.strip('.')
    
    if not st:
        st = 'a'
        
    st = st[:15].rstrip('.')
    
    st += st[-1] * (3 - len(st)) if len(st) < 3 else ''
    
    return st