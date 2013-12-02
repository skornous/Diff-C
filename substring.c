int main(int argc, char** argv){

	substring("chaine longue", 2, 9);
}


char* substring(char* in, int start, int end){

	char* out;
	int j;
	int inLength;
	int outLength;

	j = 0;
	inLength = length(in);
	outLength = inLength - (start+(inLength - end));
	out = malloc(sizeof(char)*outLength);

	for (int i = 0; i < (inLength-1); i++)
	{
		if ((i >= start) && (i <= end))
		{
			out[j++] = in[i];
		}
	}
	out[outLength] = "\0";
	return out[outLength];
}

int length(char* str){
	
	int i=0;
	while(str[i++] != '\0');
	return i;
}