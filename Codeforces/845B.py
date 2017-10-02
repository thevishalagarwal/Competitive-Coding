n = raw_input()
n = map(int, n.strip(''))
n1 = a[:3]
n1 = sorted(n1)
n2 = a[3:]
n2 = sorted(n2)
s1 = sum(n1)
s2 = sum(n2)
if s1==s2:
	print 0
else:
	if s1<s2:
		i = 0
		while s1!=s2 and i<3:
			n1[i] = min(9,s+n1[i]);
			s1 = sum(a[:3])
			i+=1
	else:
		i = 0
		while s1!=s2 and i<3:
			n2[i] = min(9,s+n2[i]);
			s2 = sum(a[3:])
			i+=1
	print i
