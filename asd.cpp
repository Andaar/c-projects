#include <iostream>

using namespace std;


void drukuj(char t[8][8])
{
	cout << "  H G F E D C B A" << endl;
	for(int i = 0; i < 8; i++)
	{
		cout << 8 - i << "|";
		for(int j = 0; j < 8; j++)
		{
			if(i%2==0 && t[i][j] == ' ' && j%2 == 0)
			{
				cout << (char)24 << "|";
			}
			else if(i%2!=0 && t[i][j] == ' ' && j%2 != 0)
			{
				cout << (char)24 << "|";
			}
			else
			{
				cout << t[i][j] << "|";
			}
		}
		cout << i + 1 << endl;
	}
	cout << "  A B C D E F G H" << endl;
}
int main()
{
	int const iloscWierszy = 8;
	char t[iloscWierszy][iloscWierszy];
	for(int i = 0; i < iloscWierszy; i++)
	{
		for(int j = 0; j < iloscWierszy; j++)
		{
			t[i][j] = ' ';
		}
	}
	t[6][6] = 'W';
	drukuj(t);
	return 0;
}
