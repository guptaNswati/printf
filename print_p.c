#include <stdio.h>

/**
* print_P - prints an address in hexadecimal
* @ptr: pointer pointing to a variable
**/
void *print_P(void *ptr)
{
	char *str;
	int i;

	str = (char *)ptr;

	while (str[i] != '\0')
	{
		printf("%d\n", str[i]);
		i++;
	}
}
void main()
{
	int i = 1;
	print_P(&i);
/* printf("%s\n", s); */
}
