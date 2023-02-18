if __name__ == '__main__':
    n = int(input())
    records = []
    marks = []
    for i in range(0,n):
        n = input()
        m = float(input())
        records.append([n,m])
        if m in marks:
            continue
        else:
            marks.append(m)
    marks.sort()
    sl = marks[1]
    name = []
    for k in records:
        if(k[1]==sl):
            name.append(k[0])
    name.sort()
    for x in name:
        print(x)
        
    
        
        