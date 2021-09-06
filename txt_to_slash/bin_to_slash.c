#include <stdio.h>
#include <string.h>

int main(){
	char str[255];
	int size, i = 0;
	fgets(str, sizeof(str), stdin);
	size = strlen(str);
	
	for (i = 0; i < size; ++i){
		if (str[i] == '0'){
			printf("\\");
		}else if (str[i] == '1'){
			printf("/");
		}
	}
	printf("\n");
	return 0;
}