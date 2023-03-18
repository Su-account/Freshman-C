#include<stdio.h>
#include<string.h>
char b[100];
char* rounding(char* p)
{
	int  len = strlen(p),i=0, j = 0;
	
	while (p[i] == '0')
	{
		p[i] = '\0';
		i++;
	}
	for (i; i <len; i++)
	{
		if (p[i] == '.')
			break;
		b[j] = p[i];
		j++;
	}

	b[j] = '\0';
	return b;
}
int main(void)
{
	char a[100];
	scanf("%s", a);
	puts(rounding(a));
	return 0;
}
