/**C program to print out string value using puts function**/

#include <stdio.h>
#include <string.h>

int main () {
	char str1[64];

	strcpy(str1, "\"Programming is like building a multilingual puzzle");

	puts(str1);

	return(0);
}
