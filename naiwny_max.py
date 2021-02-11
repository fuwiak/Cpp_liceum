


lista = [2,1,22,3,7,-9]


def znajdz_max(lista):
	max_ = lista[0]
	for x in lista:
		if x>max_:
			max_=x
	return max_


print("wybrana lista", lista)
print("element najwiekszty ", znajdz_max(lista))



