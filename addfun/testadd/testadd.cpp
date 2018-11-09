#include "stdafx.h"
#include <Windows.h>
#include "addfun.h"
#include<iostream>
#include<stdlib.h>
#include <tchar.h>
using namespace std;
int _tmain(int argc, _TCHAR* argv[])
{
	int a = 2, b = 1, c = 0;
	HINSTANCE hDllInst = LoadLibrary("addfun.dll");
	ApiAdd myfun = 0;
	myfun = (ApiAdd)GetProcAddress(hDllInst, "add");
	// youFuntionName 在DLL中声明的函数名
	if (myfun)
	{
		c = myfun(a, b);
	}

	FreeLibrary(hDllInst);
	cout << c << endl;
	system("pause");
	return 0;
}
