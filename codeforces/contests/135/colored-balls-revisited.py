from sys import stdin, stdout
 
def solve():
    n = int(stdin.readline())
    cnt = list(map(int, stdin.readline().split()))
    m, index = 0, 0
    for i in range(n):
        if cnt[i] > m:
            m = cnt[i]
            index = i + 1
    print(index)
 
def main():
    t = stdin.readline()
    for i in range(int(t)):
        solve()
        
main()
