#include <stdio.h>

/* concatenate t to the end of s */
void strcat(char *s, char *t) {
	while(*s != '\0') s++;
	while(*t != '\0') *s++ = *t++;
}

int main() {
	char str[80] = "initial";
  	strcat(str, " test");
	puts(str);
}
