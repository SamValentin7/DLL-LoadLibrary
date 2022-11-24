#ifndef SHARED_LIB_H
#define SHARED_LIB_H

#include <string>
#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <cstring>
#include <array>
#include <fstream>
#include <stdio.h>

using namespace std;
#ifdef __cplusplus
  extern "C"{
#endif

#ifdef BUID_MY_DLL
  #define SHARED_LIB __declspec(dllexport)
#else 
  #define SHARED_LIB __declspec(dllimport)
#endif

void SHARED_LIB addition(int a, int b);

int SHARED_LIB substraction(int a, int b);

int SHARED_LIB modulo(int a, int b);

int SHARED_LIB multiply(int a, int b);

void SHARED_LIB showtext();

#ifdef __cplusplus
  }
  #endif
  #endif
