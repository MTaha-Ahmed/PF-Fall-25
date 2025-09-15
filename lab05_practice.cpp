#include <stdio.h>
#include <string.h>
int main()
{
	char qual[5];
	char interview[10];
	printf("Enter qualification\n");
	scanf("%s",&qual);
	if(strcmp(qual,"MS") == 0){
		printf("Enter interview result\n");
		scanf("%s",&interview);
		if(strcmp(interview,"Pass")==0){
			printf("You are hired");
		} else {
			printf("Better luck next time");
		}
	} else {
		printf("Need MS");
	}
}
