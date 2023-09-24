from sys import stdin, stdout
 
def solve():
    n = int(stdin.readline())
    a = list(map(int, stdin.readline().split()))
    freq = {}
    for i in a:
        if i in freq:
            return "NO"
        freq[i] = 1 + freq.get(i, 0)
    return "YES"
 
def main():
    t = int(stdin.readline())
    for i in range(t):
        print(solve())
        
main()
