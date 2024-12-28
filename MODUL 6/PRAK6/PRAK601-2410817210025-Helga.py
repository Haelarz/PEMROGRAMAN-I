a, b = map(int, input().split())
n = []
x = 0
isi = list(map(int, input().split()))
for i in range (a):
    n.append(isi[x:x+b])
    x = x + b
for a in n:
    for isi in a:
        print(isi, end = ' ')
    print( )