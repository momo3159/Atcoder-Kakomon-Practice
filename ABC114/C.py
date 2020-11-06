ans = 0

def solve(num, max):
    global ans
    if(int(num) > max):
        return

    if(357 <= int(num) and int(num) <= max):
        if(("3" in num) and ("5" in num) and ("7" in num)):
            ans +=  1
    
    solve("3"+num, max)
    solve("5"+num, max)
    solve("7"+num, max)


N = int(input())

solve("3", N)
solve("5", N)
solve("7", N)

print(ans)
