"""
ACMICPIC #1157

Find the most common letter in a string.
If more than one letter exist meeting the requirement, print '?'.

input>> 'mississipi'
output>> '?'

input>> 'mississsipi'
output>> 'S'
"""
import sys
input=sys.stdin.readline().strip().upper()
list=[input.count(chr(c)) for c in range(65, 91)]
m=max(list)
if (list.count(m)==1):
    print(chr(list.index(m)+65))
else:
    print('?')
