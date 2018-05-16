c={1: 'py', 2: 'java', 3: 'C', 4: 'cpp', 5: 'rust', 6: 'erlang'}
print(c)
key=int(input('Enter the key you want to remove:'))
del c[key]
print(c)