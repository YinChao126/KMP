#ifndef _KMP_H_
#define _KMP_H_

//#define Cplusplus


#ifdef Cplusplus
#include<iostream>
#include<string>
#include<vector>
using namespace std;
int kmp_find(const string& target, const string& pattern);
#else
#include <string.h>
#include <stdlib.h>
int kmp_find(const char *target, const char *pattern);
#endif
#endif