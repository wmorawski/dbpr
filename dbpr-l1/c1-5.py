import sys

args = sys.argv[1:]
f = open(args[0])
found = []

for x in f:
    x = x.rstrip()
    if args[1] in x:
        found.append(x)
print(found)
f.close()

