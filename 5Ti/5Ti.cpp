// 5Ti.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>

using namespace std;

int main()
{
    std::cout << "Hello World!\n";
    int wiekUcznia = 18;
	bool isSober = true;
	if (wiekUcznia >= 18 && isSober) {
		std::cout << "Uczen moze wejsc do klubu.\n";
	}
	else {
		std::cout << "Uczen nie moze wejsc do klubu.\n";
	}
	bool platnoscKarta = true;
	bool platnoscPrzelewem = true;
	int liczbaWybranychFormPlatnosci = 0;
	if (platnoscKarta != platnoscPrzelewem) {
		std::cout << "Platnosc zaakceptowana.\n";
	}
	else if(platnoscKarta == true && platnoscPrzelewem == true) {
		liczbaWybranychFormPlatnosci = 2;
		std::cout << "Platnosc odrzucona. Wybrano dwie formy platnosci.\n";
		cout << liczbaWybranychFormPlatnosci << "\n";
	}
	else {
		std::cout << "Platnosc odrzucona. Nie wybrano zadnej formy platnosci.\n";
	}
	cout << liczbaWybranychFormPlatnosci;
	return 0;
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
