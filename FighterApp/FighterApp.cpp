// FighterApp.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include "pch.h"
#include <iostream>
#include <math.h>
#include <stdlib.h>     /* srand, rand */
#include <time.h>       /* time */
#include <string>
using namespace std;
string odwrocenie(string pomoc)
{
	size_t size = pomoc.size();
	string nowy;
	for (size_t i = 0; i < size; ++i)
	{
		nowy += pomoc[size - i - 1];
	}
	return nowy;
}
string sortowanie(string &znaki)
{
	int length;
	for (length = 0; znaki[length] != '\0'; length++) {}
	for (int m = 0; m < length; m++)
	{
		for (int n = 0; n < length - 1; n++)
		{
			if (znaki[n] > znaki[n + 1]) swap(znaki[n], znaki[n + 1]);
		}
	}
	return znaki;
}
void removeSpaces(char *str)
{
	// To keep track of non-space character count 
	int count = 0;

	// Traverse the given string. If current character 
	// is not space, then place it at index 'count++' 
	for (int i = 0; str[i]; i++)
		if (str[i] != ' ')
			str[count++] = str[i]; // here count is 
								   // incremented 
	str[count] = '\0';
}
int main()
{
	/*int tablica[4] = { 1,-4,7,12 };
	int suma = 0, suma_do_sredniej = 0;
	unsigned long liczba = 0;
	string znaki;
	float srednia = 0;
	for (int i = 0; i < 4; i++)
	{
		if (tablica[i] > 0) suma += tablica[i];
		suma_do_sredniej += tablica[i];
	}
	cout << "Suma: " << suma << "\t" << "Srednia: " << floor(suma_do_sredniej/4) << "\n";
	srand(time(NULL));
	liczba = rand() % 4294967295;
	cout << liczba << "\n";
	znaki=odwrocenie(to_string(liczba));
	cout << znaki << "\n";
	system("pause");
	/////////////////////////////////////
	string wyraz;
	cin >> wyraz;
	//cout << sortowanie(wyraz) << endl;
	size_t length = wyraz.size();
	//for (length = 0; wyraz[length] != '\0'; length++) {}
	wyraz[length - 1] = '\0';
	for (size_t i = 0; i < length-1; i++)
	{
		wyraz[i] = wyraz[i + 1];
	}
	cout << wyraz << endl;*/
	char str[] = "g  eeks   for ge  eeks  ";
	removeSpaces(str);
	cout << str;
	system("pause");
}

// Uruchomienie programu: Ctrl + F5 lub menu Debugowanie > Uruchom bez debugowania
// Debugowanie programu: F5 lub menu Debugowanie > Rozpocznij debugowanie

// Porady dotyczące rozpoczynania pracy:
//   1. Użyj okna Eksploratora rozwiązań, aby dodać pliki i zarządzać nimi
//   2. Użyj okna programu Team Explorer, aby nawiązać połączenie z kontrolą źródła
//   3. Użyj okna Dane wyjściowe, aby sprawdzić dane wyjściowe kompilacji i inne komunikaty
//   4. Użyj okna Lista błędów, aby zobaczyć błędy
//   5. Wybierz pozycję Projekt > Dodaj nowy element, aby utworzyć nowe pliki kodu, lub wybierz pozycję Projekt > Dodaj istniejący element, aby dodać istniejące pliku kodu do projektu
//   6. Aby w przyszłości ponownie otworzyć ten projekt, przejdź do pozycji Plik > Otwórz > Projekt i wybierz plik sln
