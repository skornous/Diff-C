#include <stdio.h>
#include <stdlib.h>
#include <dirent.h>

/*diff fichier1 fichier2*/
int main(int argc, char** argv){
	if (argc < 3){
		printf("%s: operande manquante apres \"%s\"\n%s: Pour en savoir davantage, utilisez: \"%s --help\".\n", argv[0], argv[argc-1], argv[0], argv[0]);
		return 1; 
	}
	
	

	return 0;
}
