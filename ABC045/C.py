S = str(input())
N = len(S) - 1

ans = 0
for bit in range(1 << N):
    copy = S
    before = 0
    for i in range(N):
        if(bit & (1 << i)):
            ans += int(copy[before:i+1])
            before = i+1

    ans += int(copy[before:])

print(ans)
