#pragma once

class Alfanumeric_data_table {
private:
	char data_table[45];
public:
	Alfanumeric_data_table();
	int get_number_of_sign(char);
	char get_value_of_sign(int);
};