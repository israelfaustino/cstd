#include <stdio.h>

int main(){
	FILE *bintxt = fopen("bin.txt", "r");

	char ch;

	while ((ch = fgetc(bintxt)) != EOF){
	//	putchar(ch);
	///*
	//ch = fgetc(bintxt);
		if (ch == '0'){
			printf("\\");
		}else if (ch == '1'){
			printf("/");
		}else{
			printf("%c", ch);
		}
	}
	//*/
	fclose(bintxt);
	return 0;

}