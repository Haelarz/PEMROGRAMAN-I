s = int(input());

d = int(s / 86400)  
s %= 86400

h = int(s / 3600) 
s %= 3600


m = int(s / 60)  
s %= 60

if d > 0:
    print(f"{d} hari {h:02}:{m:02}:{s:02}");
else:
    print(f"{h:02}:{m:02}:{s:02}");