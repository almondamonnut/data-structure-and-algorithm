T = int(input())
ans = []
for case in range(T):
    N = int(input())
    cards = input().split()
    
    flag = 0
    for i in range(N):
        card = cards[i]
        cut = 0

        for next in range(i+1,N):
            if (card != cards[next]):
                cut = 1
            if (cut==1 and card==cards[next]):
                print(f"Case #{case+1}: IMPOSSIBLE")
                # ans.append("IMPOSSIBLE")
                flag = 1
                break

        if flag==1:
            break
    if flag!=1:
        printed = set()
        print(f"Case #{case+1}:",end=" ")
        # Iterate through the list, printing each value if it hasn't already been printed
        for i in cards:
            if i not in printed:
                print(i, end=' ')
                printed.add(i)

# for case in range(T):
#     print(f"Case #{case+1}:", ans[case])

