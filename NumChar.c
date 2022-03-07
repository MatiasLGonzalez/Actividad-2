#include<stdio.h>
#include<string.h>

void delChar(char *str, char ch)
{
	char *p = str;
	char *q = str;
	while(*p)
	{
		if(*p != ch)
		{
			*q = *p;
			q++;
		}
		p++;
	}
	*q = '\0';
}

int main(int argc, char const *argv[])
{
	int count = 0;
	char myString[10];
	printf("Hello world!\n");
	printf("Enter a string: ");
	scanf("%s", myString);
	while (strlen(myString)>0)
	{
		char output = myString[0];
		for (int i = 0; i < strlen(myString) - 1; i++)
		{
			myString[i] = myString[i + 1];
		}
		myString[strlen(myString) - 1] = '\0';
		int count = 1;
		
		for (int pos = 0; myString[pos] != '\0'; pos++)
		{
			char character = myString[pos];
			if (output == character)
			{
				count++;
			}
		}
		delChar(myString, output);
		printf("%c: %d\n", output, count);
	} 
	return 0;
}
