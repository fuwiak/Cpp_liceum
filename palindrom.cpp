#include<iostream>
#include<string>

int main()
{
	int n,m;
	std::string word;

	std::cout << "Podaj wyraz, ktory chcesz sprawdzic: ";
	std::cin >> wyraz;

	m = word.length()-1;

	for (n = 0; n<m; n++)
	{
		if (word[n] != word[m-n])
		break;
	}
	if (n < m)
		std::cout << "Podany wyraz nie jest palindromem" <<std::endl;
	else
		std::cout << "Podany wyraz jest palindromem" <<std::endl;

return 0;

}