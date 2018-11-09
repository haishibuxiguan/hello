#pragma once
#include "stdafx.h"

extern "C"
{
	 int add(int a, int b);
	typedef int(*ApiAdd)(int, int);
}