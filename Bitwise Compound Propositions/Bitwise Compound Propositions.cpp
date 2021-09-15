#include <iostream>
#include <stdlib.h>
#include <string>
using namespace std;

void bitwiseOr(string p, string q) {
	int p_size = p.size();
	int q_size = q.size();
	cout << "\nBitwise truth table for P OR Q: " << endl;
	cout << "P	Q	P | Q" << endl;
	cout << "--------------------------" << endl;
	for (int i = 0; i < p_size; i++)
	{
		cout << p[i] << "	" << q[i] << "	  " << (char)(p[i] | q[i]) << endl;
		cout << "--------------------------" << endl;
	}
}

void bitwiseAnd(string p, string q) {
	int p_size = p.size();
	int q_size = q.size();
	cout << "\nBitwise truth table for P AND Q: " << endl;
	cout << "P	Q	P & Q" << endl;
	cout << "--------------------------" << endl;
	for (int i = 0; i < p_size; i++)
	{
		cout << p[i] << "	" << q[i] << "	  " << (char)(p[i] & q[i]) << endl;
		cout << "--------------------------" << endl;
	}
}

void bitwiseXor(string p, string q) {
	int p_size = p.size();
	int q_size = q.size();
	cout << "\nBitwise truth table for P XOR Q: " << endl;
	cout << "P	Q	P ^ Q" << endl;
	cout << "--------------------------" << endl;
	for (int i = 0; i < p_size; i++)
	{
		cout << p[i] << "	" << q[i] << "	  " << (p[i] ^ q[i]) << endl;
		cout << "--------------------------" << endl;
	}
}

int main()
{
	string p{}, q{};
	cout << "Enter 1'st bit string: ";
	cin >> p;
	//system("CLS");

	cout << "Enter 2'nd bit string: ";
	cin >> q;
	//system("CLS");

	bitwiseOr(p, q);
	cout << endl;
	bitwiseAnd(p, q);
	cout << endl;
	bitwiseXor(p, q);
}