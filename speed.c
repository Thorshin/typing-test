#include <time.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define BLUE "\x1B[34m"
#define RESET "\x1B[0m"
#define RED "\x1B[31m"
#define GREEN "\x1B[32m"


int main(){
	char c, m[70][11], input[70][20], errors=0;
	FILE *fp;
	int n, k=0, l=0, e[30], x=0;
	double v;
	srand(time(0));

	printf("How many words do you want to get tested on? (max 70 for now)\n");

	scanf("%d", &n);

	for(int j=0; j<n; j++, k++){
	fp = fopen("words.txt" , "r");
	v = rand()%1000;
	for(int i=0; i<=v; i++) {
	do
	{
	c =fgetc(fp);
	if(c != '\n' && i == v)
		{
		printf(BLUE "%c" RESET, c);
        m[k][l++]=c;
		}
	if(c == '\n')
		break;
	}while(1);

	}
	m[k][l]='\0';
	printf(" ");
	fclose(fp);
	l=0;
	}
	printf("\n");

	for(int i=0; i<n; i++){
		scanf("%s", input[i]);
	}

	for(int i=0; i<n; i++){
		if(strcmp(m[i],input[i]) != 0){
		e[x++] = i;
		errors++;
		}
	}
	if(errors == 0)
	printf(GREEN "You made %d errors\n" RESET, errors);
	else{

	printf(RED "You made %d errors :\n" RESET, errors);
	for(int i=0; i<x; i++){
	printf("%s  == > %s\n", m[e[i]], input[e[i]]);
	}
}
return 0;

}

