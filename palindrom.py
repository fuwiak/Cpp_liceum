

przyklad1 = "dupa"
przyklad2 = "kajak"


def czy_palindrom(slowo):
	if slowo == slowo[::-1]:
		print("slowo ", slowo, "jest palindromem")
	else:
		print("slowo", slowo, "nie jest palindromem")



czy_palindrom(przyklad1)
czy_palindrom(przyklad2)