


# file_name = 


def read_file_from_matura(file_name):

	path = f"/Users/macbookssd/Downloads/Dane_PR2/{file_name}"
	dane = open(path, "r")
	dane = dane.read()

	return dane


przyklad = read_file_from_matura("przyklad.txt")
