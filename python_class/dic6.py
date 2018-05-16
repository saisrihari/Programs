c={4: 'py', 6: 'java', 1: 'C', 3: 'cpp', 2: 'rust', 5: 'erlang'}
print(c)
for key in sorted(c.keys()):
    print( "%s: %s" %(key, c[key]))