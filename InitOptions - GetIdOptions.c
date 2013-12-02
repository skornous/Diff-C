#include <stdio.h>
#define CODE_ERROR 0

int init_options(char args**)
{
	int options[];
	int length;
	int i;
	
	length = size(args);
	options = malloc(sizeof(int) * length);
	
	for (i = 0 , i = length - 1, i++)
	{
		options[i] = getIdOptions(args[i]);
	}
	return options;
}

int getIdOptions(string opt)
{
	string undashedOption;
	
	if(opt[1] == '-')
	{ undashedOption = substring(opt, 2, length(opt));}
	else{
		undashedOption = substring(opt, 1, length(opt));}
	
	if(strcmp(undashedOption, "normal")
	{ return 1; }
	if(strcmp(undashedOption, "brief" || strcmp(undashedOption,"q"))
	{ return 2; }
	if(strcmp(undashedOption,"s") || strcmp(undashedOption, "report-identical-files"))
	{ return 3; }
	if(strcmp(undashedOption, "c"))
	{ return 4; }
	if(strcmp(undashedOption, "C") || strcmp(undashedOption, "context"))
	{ return 5; }
	if(strcmp(undashedOption, "u"))
	{ return 6; }
	if(strcmp(undashedOption,"U") || strcmp(undashedOption, "unified"))
	{ return 7; )
	if(strcmp(undashedOption,"e")|| strcmp(undashedOption, "ed"))
	{ return 8; }
	if(strcmp(undashedOption,"n") || strcmp(undashedOption,"rcs"))
	{ return 9; }
	if(strcmp(undashedOption,"y") || strcmp(undashedOption,"side-by-side"))
	{ return 10;}
	if(strcmp(undashedOption,"w"))
	{ return 11;}
	if(strcmp(undashedOption,"width"))
	{ return 12;)
	if(strcmp(undashedOption,"left-column"))
	{ return 13;}
	if(strcmp(undashedOption,"suppress-common lines"))
	{ return 14;}
	if(strcmp(undashedOption,"p") || strcmp(undashedOption,"show-c-function"))
	{ return 15;}
	if(strcmp(undashedOption,"F"))
	{ return 16;}
	if(strcmp(undashedOption,"show-function-line"))
	{ return 17;}
	if(strcmp(undashedOption,"t") || strcmp(undashedOption,"expand-tabs"))
	{ return 18;}
	if(strcmp(undashedOption,"T") || strcmp(undashedOption,"initial-tab"))
	{ return 19;}
	if(strcmp(undashedOption,"tabsize"))
	{ return 20;}
	if(strcmp(undashedOption,"suppress-blank-empty"))
	{ return 21;}
	if(strcmp(undashedOption,"l") || strcmp(undashedOption,"paginate"))
	{ return 22;}
	if(strcmp(undashedOption,"ignore-file-name-case"))
	{ return 23;}
	if(strcmp(undashedOption,"no-ignore-file-name-case"))
	{ return 24;}
	else
	{ return CODE_ERROR; }
}

