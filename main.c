#include <stdio.h>
#include <stdlib.h>

typedef struct StackList{
	struct StackList* Down;
	int myData;
}List;

List* pushData(List *T,int data)
{
	List* tmp = (char *)malloc(sizeof(List));
   if(tmp == NULL) {
      printf("メモリが確保できません\n");
	  return NULL;
   }
   tmp->Down = T;
   return tmp;
}
List* popData(List* T)
{
	List *tmp = T->Down;
	free(T);
	return tmp;
}
void showList(List *T)
{
	while (T!=NULL)
	{
		printf("%d", T->myData);
		T = T->Down;
	}
}
int main(int argc, char *argv[])
{
    char str[256];
	List *TOP=NULL;
	while (fgets(str, sizeof(str), stdin))
	{
		int tmp = strtol(str, NULL, 10);
		
	}

	return 0;
}
