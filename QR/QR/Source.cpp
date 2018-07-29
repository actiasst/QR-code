#include <iostream>
#include <string>
#include "Tables.h"

void itob(int);
void wypisz(std::string);

using namespace std;

int main() {
	Alfanumeric_data_table a = Alfanumeric_data_table();
	string data_encoded = "";
	string words_to_encode = "HELLO WORLD";
	data_encoded += "0010"; //alfanumeric code indicator

	for (int m = 256; m > 0; m >>= 1) // dodawanie dlugosci kodowanych znakow
		data_encoded += ((words_to_encode.length() & m) ? "1" : "0");


	wypisz(data_encoded);
	system("pause");
}

void itob(int a) //NOT MINE :(
{
	for (int m = 8; m > 0; m >>= 1) 
		cout << ((a & m) ? "1" : "0");
}

void wypisz(string napis) {
	for (int i = 0; i < napis.length(); i++) {
		if (i % 8 == 0 && i != 0)
			cout << " ";
		cout << napis.at(i);
	}
	cout << endl;
}