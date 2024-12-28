a, b = map(int, input().split())
if(a != b):
    print("Jumlah tidak sama")
else:
    barisa = list(map(int, input().split()))
    barisb = list(map(int, input().split()))
    for i in range (a):
        print(barisa[i] * barisb[i], end = ' ')