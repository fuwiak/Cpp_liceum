



shift  = 2

slowo = "abc"

szyfr = "cde"



def szyfr_cezara(slowo, shift):
	szyfr = []
	for litera in slowo:
		sz = ord(litera)+shift
		sz = chr(sz)

		szyfr.append(sz)

	return "".join(szyfr)


def deszyfr_cezara(slowo, shift):
	deszyfr = []
	for litera in slowo:
		sz = ord(litera)-shift
		sz = chr(sz)

		deszyfr.append(sz)

	return "".join(deszyfr)