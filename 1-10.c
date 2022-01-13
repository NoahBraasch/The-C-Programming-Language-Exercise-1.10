#include <stdio.h>

int main(){

	int c;

	while ((c = getchar()) != EOF){
		if (c == '\t')
			// Using printf because \t is two characters not one
			printf("\\t");
		else if (c == '\b')
			printf("\\b");
		else if(c == '\\')
			// Remember we have to put four \ because we need two to print and each one that prints needs to be escaped.
			printf("\\\\");
		else
			putchar(c);
	}

	return 0;
}