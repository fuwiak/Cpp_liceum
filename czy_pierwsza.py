


liczba1  = 13

liczba2 = 20



def czy_pierwsza(liczba):
	koniec = liczba//2 + 1
	for dzielnik in range(2, koniec):
		if liczba%dzielnik==0:
			return "liczba ", liczba, " jest liczba zlozona"


	return "liczba ", liczba, " jest liczba pierwsza"


