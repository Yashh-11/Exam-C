#include <stdio.h>

int main()
{
	int count[123] = {0};
	char str[100];
	printf("Enter string: \n");
	scanf("%s", str);

	for (int i = 0; str[i] != '\0'; i++)
	{
		count[str[i]]++;
	}
	for (int i = 0; i <= 122; i++)
	{
		if (count[i] > 0)
		{
			printf("%c => %d\n", i,count[i]);
		}
	}

	return 0;
}