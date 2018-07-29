#include "Tables.h";

Alfanumeric_data_table::Alfanumeric_data_table() {
	data_table[0] = '0';
	data_table[1] = '1';
	data_table[2] = '2';
	data_table[3] = '3';
	data_table[4] = '4';
	data_table[5] = '5';
	data_table[6] = '6';
	data_table[7] = '7';
	data_table[8] = '8';
	data_table[9] = '9';
	data_table[10] = 'A';
	data_table[11] = 'B';
	data_table[12] = 'C';
	data_table[13] = 'D';
	data_table[14] = 'E';
	data_table[15] = 'F';
	data_table[16] = 'G';
	data_table[17] = 'H';
	data_table[18] = 'I';
	data_table[19] = 'J';
	data_table[20] = 'K';
	data_table[21] = 'L';
	data_table[22] = 'M';
	data_table[23] = 'N';
	data_table[24] = 'O';
	data_table[25] = 'P';
	data_table[26] = 'Q';
	data_table[27] = 'R';
	data_table[28] = 'S';
	data_table[29] = 'T';
	data_table[30] = 'U';
	data_table[31] = 'V';
	data_table[32] = 'W';
	data_table[33] = 'X';
	data_table[34] = 'Y';
	data_table[35] = 'Z';
	data_table[36] = ' ';
	data_table[37] = '$';
	data_table[38] = '%';
	data_table[39] = '*';
	data_table[40] = '+';
	data_table[41] = '-';
	data_table[42] = '.';
	data_table[43] = '/';
	data_table[44] = ':';
}

int Alfanumeric_data_table::get_number_of_sign(char sign){
	for (int i = 0; i < 45; i++)
		if (data_table[i] == sign)
			return i;
}

char Alfanumeric_data_table::get_value_of_sign(int index) {
	return data_table[index];
}