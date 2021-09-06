#include <stdio.h>

int main(){
	int size, i, j;
	
	scanf("%d", &size);
	int lst[size];

	for (i = 0; i < size;++i){
		scanf("%i", &lst[i]);
	}
	for (i = 0; i < size;++i){
		for(j = 0; lst[i] > 0; ++j){
			printf("%i", lst[i] % 2);
			lst[i] = lst[i] / 2;
		}
		if (i != size-1) printf(" ");
	}
	printf("\n");
	return 0;
}