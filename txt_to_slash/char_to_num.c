#include <stdio.h>

int main(){
    FILE *txt = fopen("bin.txt", "r");
    
    char ch;
    int size = 0;

if (!txt){
    return EXIT_FAILURE;
  }

    while (1){
	    ch = fgetc(txt);
        if (ch == EOF) break;
            size++;
    }
    printf ("%i\n", size);
    rewind(txt);

    while (1){
	    ch = fgetc(txt);
        if (ch == EOF) break;
        printf("%d\n", ch);
    }
    printf("\n")
    fclose(txt);
    return 0;
}

