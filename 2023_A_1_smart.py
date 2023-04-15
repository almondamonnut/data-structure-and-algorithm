def realdict_(c):
    return realdict[c]

T = int(input())
for t in range(T):
    diction = list(map(int, input().split()))
    N = int(input())
    text = []
    for n in range(N):
        text.append(input())
    
    realdict = dict()
    for i in range(26):
        realdict[chr(i+65)] = str(diction[i])

    encode = ["" for i in range(N)]
    for i in range(N):
        encode[i] = "".join(list(map(realdict_, text[i])))

    flag = "NO"
    if len(encode) != len(set(encode)):
        # print(encode[i],encode[j])
        flag = "YES"
    # print(encode)
    print(f"Case #{t+1}: {flag}")