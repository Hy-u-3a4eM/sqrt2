#include "std_lib_facilities.h"

int main()
{
	setlocale(LC_ALL, "Russian");
	string str_x;
	string str_uend;
	//string str_result;
	double x = 0.0;
	int uend = 0;
	double result = 0.0;

	restart:
	cout << "����� �� �����, �� �������� ���� ����� ���������� ������:" << endl;
	cin >> str_x;

	/*
	for (int i = 0; i < str_x.length(); ++i)
	{
		char ch = str_x.c_str()[i];

		if (!isdigit(ch))
		{
			cerr << "������ ������� �������!" << endl;
			goto end;
		}

	}
	*/

	x = atoi(str_x.c_str());

	if (x < 0)
	{
		cerr << "�� ����� ����" << endl;
		goto end;
	}

	else
	{
		result = sqrt(x);
		cout << "��� �����: " << result << endl;
	}

	end:
	cout << "�� ������ ���������� ������������ ��������� (0 -- ���, ��������� ���������� ���������)?" << endl; //1 -- ��, ���������� ���������� ���������
	cin >> str_uend;

	for (int i = 0; i < str_uend.length(); ++i)
	{
		char ch = str_uend.c_str()[i];

		if (!isdigit(ch))
		{
			cerr << "������ ������� �������!" << endl;
			goto end;
		}

	}

	uend = atoi(str_uend.c_str());

	system("CLS");

	if (uend != 0)
	{
		goto restart;
	}

	keep_window_open();
	system("pause");
	return 0;
}