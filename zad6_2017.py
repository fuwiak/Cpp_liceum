#6.1


def read_file_from_matura(file_name):

	path = f"/Users/macbookssd/Downloads/Dane_PR2/{file_name}"
	dane = open(path, "r")
	dane = dane.read()

	return dane


przyklad = read_file_from_matura("dane.txt")
przyklad = przyklad.split("\n")
przyklad = przyklad[:-1]


splitted_przyklad = []
for row in przyklad:
	row = row.split(" ")
	splitted_przyklad.append(row)



maxi = int(splitted_przyklad[0][0])
mini = int(splitted_przyklad[0][0])

for row in splitted_przyklad:
	for pixel in row:
		pixel = int(pixel)
		if pixel>maxi:
			maxi=pixel

		if pixel<mini:
			mini=pixel


print("max", maxi)
print("min", mini)
