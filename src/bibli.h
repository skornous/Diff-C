int length(char *str){
	int i = 0;
	while (str[i++] != '\0');
	return i;
}
int size(char** array){
	int i = 0;
	while (array[i++] != 0); 
	return i;
}
