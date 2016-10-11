#include<stdio.h>
#include<string.h>
#include<math.h>
 
int main()
{
	long long t, j;
	scanf("%lld", &t);
	for(j = 0; j < t; j++) {
	char s[60];
	scanf("%s",s);
	long long l, i;
	l = strlen(s);
	int n = 0;
	if (l == 1) {
		n = 1;
	}
	else {
	if (s[0] != s[1]) {
		n++;
	}
	if (s[l - 1] != s[l - 2]) {
		n++;
	}
	for (i = 1; i < l - 1; i++) {
		if (s[i] != s[i - 1] && s[i] != s[i + 1]) {
			n++;
		}
	}
	}
	printf("%lld\n", (long long)pow(2,n));
	}
	return 0;
}