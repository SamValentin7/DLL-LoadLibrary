#pragma once
#include <string>
#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <cstring>
#include <array>
#include <fstream>
#include <stdio.h>

#ifndef FUNCTION_H
#define FUNCTION_H

extern "C" 
{
	__declspec(dllexport) double add(double a, double b);
	__declspec(dllexport) void text();
}

#endif