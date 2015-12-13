#include <stdio.h>
#include <stdlib.h>

void print(int n);
void print_b();

int main(int argc, char *argv[]) {
	int n,i;
	scanf("%d",&n);
	for(i=0;i<=n-1;i++)
		printf("Hello world!\n");
	print(n);
	print_b();
	//Hello world!
	return 0;
}
void print(int n){
	printf("n=%d\n",n);
}
void print_b(){
	printf(">_<\n");
}
