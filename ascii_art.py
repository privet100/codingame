l = int(input())
h = int(input())
t = input()

for i in range(h):
    row = input()
    for j in range(len(t)):
        n = 26
        if ord('a') <= ord(t[j]) and ord(t[j]) <= ord('z'):
            n = ord(t[j])-ord('a')
        if ord('A') <= ord(t[j]) and ord(t[j]) <= ord('Z'):
            n = ord(t[j])-ord('A')
        print(row[l*n:l*(n+1)], end="")
    print()
