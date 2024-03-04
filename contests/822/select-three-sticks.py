from sys import stdin, stdout
t = int(stdin.readline())
def solve():
    n = int(stdin.readline())
    a  = list(map(int, stdin.readline().split()))
    a.sort()
    mindist = 2e31 - 1
    for i in range(n - 2):
        mindist = min(mindist, (a[i + 2] - a[i]))
    print(mindist)
    
def main():
    for i in range(t):
        solve()
main()
