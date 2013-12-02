#include <stdio.h>
#include <stdlib.h>
#include "bibli.h"
#define CODE_ERROR 0

int* init_options(char**);
int getIdOptions(char*);

int main(int argc, char** argv)
{
 if (argc > 1)
	printf("%s : %i\n",argv[1] , getIdOptions(argv[1]));
	//printf("%i\n", getIdOptions(argv[1]));
 else 
	printf("ERROR\n");

 return 0;
}

int* init_options(char** args)
{
	int* options;
	int length;
	int i;
	
	length = size(args);
	options = malloc(sizeof(int) * length);
	
	for (i = 0 ; i < length - 1; i++)
	{
		options[i] = getIdOptions(args[i]);
	}
	return options;
}

int getIdOptions(char* opt)
{
	char* undashedOption;
	
	/*if(opt[1] == '-')
	{undashedOption = substring(opt, 2, length(opt));}
	else
	{undashedOption = substring(opt, 1, length(opt));}*/
	
	undashedOption = opt;
	
	if(strcmp(undashedOption, "normal") == 0)
	{ return 1; }
	if(strcmp(undashedOption, "brief") == 0 || strcmp(undashedOption,"q") == 0 )
	{ return 2; }
	if(strcmp(undashedOption,"s") == 0 || strcmp(undashedOption, "report-identical-files") == 0 )
	{ return 3; }
	if(strcmp(undashedOption, "c") == 0 )
	{ return 4; }
	if(strcmp(undashedOption, "C") == 0 || strcmp(undashedOption, "context") == 0 )
	{ return 5; }
	if(strcmp(undashedOption, "u") == 0 )
	{ return 6; }
	if(strcmp(undashedOption,"U") == 0 || strcmp(undashedOption, "unified") == 0 )
	{ return 7; }
	if(strcmp(undashedOption,"e") == 0 || strcmp(undashedOption, "ed") == 0 )
	{ return 8; }
	if(strcmp(undashedOption,"n") == 0 || strcmp(undashedOption,"rcs") == 0 )
	{ return 9; }
	if(strcmp(undashedOption,"y") == 0 || strcmp(undashedOption,"side-by-side") == 0 )
	{ return 10;}
	if(strcmp(undashedOption,"w") == 0 )
	{ return 11;}
	if(strcmp(undashedOption,"width") == 0 )
	{ return 12;}
	if(strcmp(undashedOption,"left-column") == 0 )
	{ return 13;}
	if(strcmp(undashedOption,"suppress-common-lines") == 0 )
	{ return 14;}
	if(strcmp(undashedOption,"p") == 0 || strcmp(undashedOption,"show-c-function") == 0 )
	{ return 15;}
	if(strcmp(undashedOption,"F") == 0 )
	{ return 16;}
	if(strcmp(undashedOption,"show-function-line") == 0 )
	{ return 17;}
	if(strcmp(undashedOption,"t") == 0 || strcmp(undashedOption,"expand-tabs") == 0 )
	{ return 18;}
	if(strcmp(undashedOption,"T") == 0 || strcmp(undashedOption,"initial-tab") == 0 )
	{ return 19;}
	if(strcmp(undashedOption,"tabsize") == 0 )
	{ return 20;}
	if(strcmp(undashedOption,"suppress-blank-empty") == 0 )
	{ return 21;}
	if(strcmp(undashedOption,"l") == 0 || strcmp(undashedOption,"paginate") == 0 )
	{ return 22;}
	if(strcmp(undashedOption,"ignore-file-name-case") == 0 )
	{ return 23;}
	if(strcmp(undashedOption,"no-ignore-file-name-case") == 0 )
	{ return 24;}
	else
	{ return CODE_ERROR; }
}

