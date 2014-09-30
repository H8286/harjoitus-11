/*Sami Liimatainen
IIO14S1
Harjoitus 11
Versio 1
30.9.2014

Muuta tehtävän 9 laskin-ohjelmaa niin, etta valikko nayttaa
seuraavalta:

VALIKKO
0. Lopetus
1. Summa
2. Erotus
3. Tulo
4. Osamaara
5. Jakojaannos
6. Syota uudet luvut laskemista varten

Laskimella on siis mahdollista käsitellä
useita lukupareja käyttäjän toiveiden
mukaisesti. Mita tapahtuu, jos luku2 on 0?
HUOM! goto -lauseen käyttä on KIELLETTY!!!!
*/


#include <iostream> 
using namespace std;
int main()
{
	int luku1;
	int luku2;
	int Summa = 0, Erotus = 0, Tulo = 0, Osamaara = 0, Jaannos = 0;
	int valinta;
	int looppi = 0;
	int uusiks = 0;

	while (looppi == 0)
	{
		if (uusiks == 0)
		{
			cout << "Anna ensimmäinen luku ";
			cin >> luku1;

			cout << "Anna toinen luku ";
			cin >> luku2;
			uusiks++;
		}
		cout << "\n\nValikko";
		cout << "\n0 Lopetus ";
		cout << "\n1 Summa ";
		cout << "\n2 Erotus ";
		cout << "\n3 Tulo ";
		cout << "\n4 Osamaara ";
		cout << "\n5 Jakojaannos ";
		cout << "\n6 Syota uudet luvut laskemista varten \n";
		cin >> ws >> valinta;
		switch (valinta)
		{
		case 0:	cout << "\nValittu Lopetus\n";
			looppi++;
			break;
		case 1: cout << "\nSumma on " << (Summa = luku1 + luku2) << endl;
			break;
		case 2:	cout << "\nErotus on " << (Erotus = luku1 - luku2) << endl;
			break;
		case 3:	cout << "\nTulo on " << (Tulo = luku1 * luku2) << endl;
			break;
		case 4:	cout << "\nOsamaara on " << (Osamaara = luku1 / luku2) << endl;
			break;
		case 5:	cout << "\nJakojaannos on " << (Jaannos = luku1 % luku2) << endl;
			break;
		case 6:	cout << "\n" <<uusiks-- << endl;
			break;
		default: cout << "\nValitse luku 0-6";
			break;
		}
	}
	return 0;
}