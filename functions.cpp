#pragma once
#include <string>
using namespace std;
string units(int N)
{
	string word;
	switch (N)
	{
	case 1:
		word = "one";
		break;
	case 2:
		word = "two";
		break;
	case 3:
		word = "three";
		break;
	case 4:
		word = "four";
		break;
	case 5:
		word = "five";
		break;
	case 6:
		word = "six";
		break;
	case 7:
		word = "seven";
		break;
	case 8:
		word = "eight";
		break;
	case 9:
		word = "nine";
		break;
	case 10:
		word = "ten";
		break;
	case 11:
		word = "eleven";
		break;
	case 12:
		word = "twelve";
		break;
	default:
		break;
	}
	return word;
}

string teens(int N)
{
	string word;
	switch (N)
	{
	case 13:
		word = "thir";
		break;
	case 14:
		word = "four";
		break;
	case 15:
		word = "fif";
		break;
	case 16:
		word = "six";
	case 17:
		word = "seven";
	case 18:
		word = "eight";
		break;
	case 19:
		word = "nine";
		break;
	default:
		break;
	}
	return word + "teen";
}

string tens(int N) {
	string word;
	switch (N)
	{

	case 20:
		word = "twen";
		break;
	case 30:
		word = "thir";
		break;
	case 40:
		word = "for";
		break;
	case 50:
		word = "fif";
		break;
	case 60:
		word = "six";
		break;
	case 70:
		word = "seven";
		break;
	case 80:
		word = "eigh";
		break;
	case 90:
		word = "nine";
		break;

	default:
		break;
	}
	return word + "ty";
}

string hundreds(int N)
{
	string word;
	if (N < 10)
	{
		word = units(N) + " hundred";
	}


	return word;
}

string thousands(int N)
{
	string word;
	if (N <= 12)
	{
		word = units(N);
	}
	if (N > 12 && N<20)
	{
		word = teens(N);
	}
	if (N > 19 && N < 100)
	{
		word = tens(N);
	}
	return word += " thousand";
}

string convert(int N) {
	string numberWord;
	if (N >= 1000 && N < 100000)
	{
		numberWord += thousands((N / 1000));
		N %= 1000;
	}
	if (N != 0)
	{
		numberWord += " ";
	}
	if (N<1000 && N >= 100)
	{
		numberWord += hundreds(N / 100);
		N %= 100;
	}
	if (N != 0)
	{
		numberWord += " and ";
	}
	if (N<100 && N >= 10)
	{
		numberWord += tens(N / 10 * 10);
		N %= 10;
	}
	return numberWord;
}
