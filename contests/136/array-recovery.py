from sys import stdin, stdout
 
def solve():
    n = int(stdin.readline())
    d = list(map(int, stdin.readline().split()))
    a = [d[0]] * n
    for i in range(1, n):
        if d[i] == 0:
            a[i] = a[i - 1]
        elif d[i] > a[i - 1]:
            a[i] = d[i] + a[i - 1]
        else:
            print(-1)
            return
    res = ''
    for i in range(n):
        res += str(a[i]) + ' '
    print(res)
 
def main():
    t = int(stdin.readline())
    for i in range(t):
        solve()
 
main()
