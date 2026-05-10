def solution(dartResult):
    dartResult = dartResult.replace('10', 'X')
    result = []
    idx = -1
    for i in dartResult:
        if i.isdigit():
            result.append(int(i))
            idx += 1
        elif i == 'X':
            result.append(10)
            idx += 1
        elif i in ('S', 'D', 'T'):
            if i == 'S':
                result[idx] = result[idx] ** 1
            elif i == 'D':
                result[idx] = result[idx] ** 2
            else:
                result[idx] = result[idx] ** 3
        else:
            if i == '*':
                if idx > 0:
                    result[idx - 1] *= 2
                result[idx] *= 2
            elif i == '#':
                result[idx] *= -1
                
    return sum(result)