lista = [2,1,22,3,7,-9]


def znajdz_min(lista):
	min_ = lista[0]
	for x in lista:
		if x<min_:
			min_=x
	return min_


print("wybrana lista", lista)
print("element najmniejszy ", znajdz_min(lista))
