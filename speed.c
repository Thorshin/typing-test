#include <time.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	char c ;// m[70][11], input[70][11];
	FILE *fp;
	int n, k=0, l=0;
	double v;
	srand(time(0));

	printf("How many words do you want to get tested on? (max 70 for now)\n");

	scanf("%d", &n);

	for(int j=0; j<n; j++, k++){
	fp = fopen("/home/badre/Desktop/words.txt" , "r");
	v = rand()%1000;
	for(int i=0; i<=v; i++) {
	do
	{
	c =fgetc(fp);
	if(c != '\n' && i == v)
		{
		printf("%c", c);
//	        m[k][l++]=c;
		}
	if(c == '\n')
		break;
	}while(1);

	}
//	m[k][l]='\0';
	printf(" ");
	fclose(fp);
//	l=0;
	}
	printf("\n");
/*
	for(int i=0; i<n; i++){
		fgets(input[i], 11 , stdin);
	}

*/
return 0;

}

