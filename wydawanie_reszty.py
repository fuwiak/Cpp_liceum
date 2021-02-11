


def wydaj_reszte(kwota, cena, moneta):
	reszta = kwota%cena

	liczba_monet = reszta//moneta
	do_oddania = reszta - liczba_monet*moneta

	print("wplacona kwota ", kwota)
	print("Posiadane monenty ", moneta)
	print("Reszta ", reszta)
	print("liczba monet ", liczba_monet)
	print("do oddania ", do_oddania)
