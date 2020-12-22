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


import math
contrasting = 0
def nearContrasting(x, y, dane):
    if x != 0:
        if math.fabs(int(dane[x][y]) - int(dane[x-1][y])) > 128:
            return True
    if x != 199:
        if math.fabs(int(dane[x][y]) - int(dane[x + 1][y])) > 128:
            return True
    if y != 319:
        if math.fabs(int(dane[x][y]) - int(dane[x][y+1])) > 128:
            return True
    if y != 0:
        if math.fabs(int(dane[x][y]) - int(dane[x][y-1])) > 128:
            return True
    return False
for i in range(200):
    for j in range(320):
        if nearContrasting(i, j, dane):
            contrasting += 1
print("Punktów kontrastujących: " + str(contrasting))


