#include <stdio.h>

string init_orga(int argc, string argv){

	string sortedTab;
	int i;
	int idFile;
	int idOption;

	idFile = 0;
	idOption = 2;
	sortedTab = malloc(sizeof(char)*argc);
	for (int i = 0; i < argc-1; i++)
	{
		if (argv[i][0] == '-')
		{
			if (idOption >= argc-2)
			{
				return sortedTab[0] = "O";
			}
			else{
				sortedTab[1+idOption++] = argv[i];
			}
		}
		else{
			if (idFile >= 2)
			{
				return sortedTab[0] = "F";
			}
			else{
				sortedTab[1+idFile++] = argv[i];
			}
		}
	}
	return sortedTab[0] = "R";

}