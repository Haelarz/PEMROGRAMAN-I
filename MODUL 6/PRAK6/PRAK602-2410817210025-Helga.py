baris = int(input())
x = []
a = list(map(int, input().split()))
for i in range(baris):
    print((i + 1) * a[i], end = ' ')