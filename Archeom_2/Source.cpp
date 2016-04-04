#include <iostream>
#include <string>

using namespace std;

class Processor {
	//enum Command { Load, Swap, Sum };
	//Command current_cmd;
	int parameters[100];

	const int data_size = 20;           // Size of data in bits
	const int MAX_VAL = 524287;
	const int MIN_VAL = -524288;
	string command;            // Register that holds command
	int PS = 0;                // Status register (holds sign of last result)
	int PC = 0;                // Register of command counter (holds number of current command)
	int TC = 0;                // Register of tick counter (holds number of current tick)
	int OF = 0;                // Overflow flag

	string R[3];

	string conver_to_2_abs(int number) {
		string s = "";
		while (number > 0) {
			if (number % 2 == 0) {
				s = "0" + s;
			}
			else {
				s = "1" + s;
			}
			number = number / 2;
		}
		return s;
	}

	string ToBinStr(int val)
	{
		string bin_str = Convert.ToString(val, 2);
		if (bin_str.Length > data_size)
		{
			bin_str = bin_str.Substring(bin_str.Length - data_size);
		}
		else if (bin_str.Length < data_size)
		{
			string sign = val < 0 ? "1" : "0";
			int strlen = bin_str.Length;
			for (int i = 0; i < data_size - strlen; ++i)
				bin_str = bin_str.Insert(0, sign);
		}
		return bin_str;
	}
};

int main() {
	return 0;
}