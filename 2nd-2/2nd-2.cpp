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
	cout << "산수 문제를 자동으로 출제합니다." << endl;
	while (1)
	{
		int x = rand() % 10;
		int y = rand() % 10;
		cout << x<<"," << y << endl;
		cout << "연산자 입력하기(+,-,*,/)" << endl;
		cin >> ch;
		cout << "결과 입력하기:" << endl;
		cin >> ans;
		switch (ch)
		{
		case '+':
			if (x + y == ans)
			{
				cout << "맞았습니다." << endl;
				break;
			}
			else
			{
				cout << "틀렸습니다." << endl;
				break;
			}
		case '-':
			if (x - y == ans)
			{
				cout << "맞았습니다." << endl;
				break;
			}
			else
			{
				cout << "틀렸습니다." << endl;
				break;
			}
		case '*':
			if (x * y == ans)
			{
				cout << "맞았습니다." << endl;
				break;
			}
			else
			{
				cout << "틀렸습니다." << endl;
				break;
			}
		case '/':
			if (x / y == ans)
			{
				cout << "맞았습니다." << endl;
				break;
			}
			else
			{
				cout << "틀렸습니다." << endl;
				break;
			}
		}
	}
	return 0;
}