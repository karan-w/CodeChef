t=int(input())

for _ in range(t):
    N,K=[int(n) for n in input().split()]
    print(N%K)