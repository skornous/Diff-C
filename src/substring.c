#include <stdio.h>
#include <stdlib.h>

char* substring(char*,int,int);
int length(char*);

int main(int argc, char** argv){

	char* test = substring("chaine longue", 2, 9);
	printf("%s test\n", test );
}


char* substring(char* in, int start, int end){

	char* out;
	int j;
	int inLength;
	int outLength;
	int i;
	j = 0;
	inLength = length(in);
	outLength = inLength - (start+(inLength - end));
	out = malloc(sizeof(char)*outLength);

	for (i = 0; i < (inLength-1); i++)
	{
		if ((i >= start) && (i <= end))
		{
			out[j++] = in[i];
		}
	}
	out[outLength] = '\0';
	return out;
}

int length(char* str){
	
	int i=0;
	while(str[i++] != '\0');
	return i;
}