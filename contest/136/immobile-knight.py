from sys import stdin, stdout
def solve():
    i = 1
    n, m = map(int, stdin.readline().split())
    if (n > 1 and m > 1):
        i += 1
    print(i, i)
def main():
    t = int(stdin.readline())
    for i in range(t):
        solve()
main()
