from itertools import product
T = int(input())
ans = []
for case in range(T):
    N = int(input())
    i = 1
    while(N > (i/2)*(26+26*i)):       
        i+=1
    string = "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
    n = N - (i/2)*(26+26*i)
    text = ''.join([char*int(i) for char in string])
    ans.append(text[int(n)-1])

for case in range(T): 
    print(f"Case #{case+1}: {ans[case]}")