import math
a, b = map(int, input().split());

c = math.sqrt(b * b - a * a)
t = a
k = a + b + c
l = 0.5 * c * a

print(f"Alas = {c:.0f} cm");
print(f"Tinggi = {a:.0f} cm");
print(f"Keliling = {k:.0f} cm");
print(f"Luas = {l:.0f} cm^2");

a = int(input());
b = int(input());

c = math.sqrt(b * b - a * a)
t = a
k = a + b + c
l = 0.5 * c * a

print(f"Alas = {c:.0f} cm");
print(f"Tinggi = {a:.0f} cm");
print(f"Keliling = {k:.0f} cm");
print(f"Luas = {l:.0f} cm^2");