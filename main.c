#include<stdio.h>
#include<stdlib.h>

int main(int argc, char *argv[])
{
	char str[5];
	int array[100] = { 0 };

	//bool型として扱う(0 : false ,1: true)
	int display;

	while (fgets(str, sizeof(str), stdin)) {

		int input = atoi(str);

			if (input == -1)
			{
				printf("%d\n", array[0]);
				for (int i = 0; i < sizeof(array) / sizeof(array[0]); i++)
				{
					if (i + 1 < sizeof(array) / sizeof(array[0]) && array[i] != 0)
						array[i] = array[i + 1];
					else
						break;
				}
				display = 0;
			}
			else if (input == 0)
			{
				if (display == 0)
				{

					for (int i = 0; i < sizeof(array) / sizeof(array[0]) && array[i] != 0; i++)
					{
						if (i == 0)
							printf("%d", array[i]);
						else
							printf(",%d", array[i]);
					}
					printf("\n");
					display = 1;
				}
			}
			else
			{
				for (int i = 0; i < sizeof(array) / sizeof(array[0]) - 1; i++)
					array[sizeof(array) / sizeof(array[0]) - 1 - i] = array[sizeof(array) / sizeof(array[0]) - 2 - i];

				array[0] = input;
				display = 0;
			}
	}
	return 0;
}
