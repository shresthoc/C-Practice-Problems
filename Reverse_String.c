#include <stdio.h>
#include <string.h>

int main(){
	char string[100];
	printf("Enter the string you want reversed:");
	scanf ("%[^\n]s", &string);
	int length;
	for (length = 0; string[length] != '\0'; ++length);
	printf("Length of the string is %d\n", length);
	for (int i = length; i>=0; i--){
		char x = string[i];
	printf("%c", x);}
	return 0;
}