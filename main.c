#include <stdio.h>
struct StackList{
	struct StackList* next;
	int myData;
};

int main(int argc, char *argv[])
{
    char str[256];
    
    while(fgets(str, sizeof(str), stdin)){
        printf("%s", str);

    }

    return 0;
}
