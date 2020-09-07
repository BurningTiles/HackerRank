#
# Python  : 2.7
# Author  : BurningTiles
# Created : 2020-09-05 17:23:38
# Link    : GitHub.com/BurningTiles
# Program : Attribute Parser
#

n, q = map(int, raw_input().split())
code = [raw_input().strip()[1:-1].split() for i in range(n)]
d = {}
tag = ''
prev = ['']
for i in code:
	if i[0][0] == '/':
		tag = prev.pop()
		continue
	prev.append(tag)
	tag += '.' + i[0]
	for j in range(1, len(i), 3):
		d[tag + '~' + i[j]] = i[j + 2][1:-1]
for i in range(q):
	try:
		print d['.' + raw_input().strip()]
	except:
		print "Not Found!"


#
# Question : 
# https://www.hackerrank.com/challenges/attribute-parser/problem
#