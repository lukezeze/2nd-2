#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

int main()
{
	srand(time(NULL));
	int x, y;
	int ans;
	char ch;
	cout << "��� ������ �ڵ����� �����մϴ�." << endl;
	while (1)
	{
		int x = rand() % 10;
		int y = rand() % 10;
		cout << x<<"," << y << endl;
		cout << "������ �Է��ϱ�(+,-,*,/)" << endl;
		cin >> ch;
		cout << "��� �Է��ϱ�:" << endl;
		cin >> ans;
		switch (ch)
		{
		case '+':
			if (x + y == ans)
			{
				cout << "�¾ҽ��ϴ�." << endl;
				break;
			}
			else
			{
				cout << "Ʋ�Ƚ��ϴ�." << endl;
				break;
			}
		case '-':
			if (x - y == ans)
			{
				cout << "�¾ҽ��ϴ�." << endl;
				break;
			}
			else
			{
				cout << "Ʋ�Ƚ��ϴ�." << endl;
				break;
			}
		case '*':
			if (x * y == ans)
			{
				cout << "�¾ҽ��ϴ�." << endl;
				break;
			}
			else
			{
				cout << "Ʋ�Ƚ��ϴ�." << endl;
				break;
			}
		case '/':
			if (x / y == ans)
			{
				cout << "�¾ҽ��ϴ�." << endl;
				break;
			}
			else
			{
				cout << "Ʋ�Ƚ��ϴ�." << endl;
				break;
			}
		}
	}
	return 0;
}