#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void print(int n);

int main(int argc, char *argv[]) {
	int n,i;
	scanf("%d",&n);
	for(i=0;i<=n-1;i++)
		printf("Hello world!\n");
	//Hello world!
	return 0;
}

void print(int n){
	printf("n=%d\n",n);
}
