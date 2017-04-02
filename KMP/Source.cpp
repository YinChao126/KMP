#include "KMP.h"

int main()
{
#ifdef Cplusplus
	string source = "annbcdanacadsannannabnna";
	string pattern = "annann";
	cout << kmp_find(source, pattern) << endl;
#else
	char *source = "annbcdanacadsannannabnna";
	char *pattern = "annann";
	int index = kmp_find(source, pattern);
#endif
	return 0;
}