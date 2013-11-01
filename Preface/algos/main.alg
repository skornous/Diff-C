Conseil : 
	"Ouvrir les trois fichiers avec des pointeurs et faire le parcours tel quel"..... whaat ?

___ALGO___
Procédure diff( d/r f1 : pointeur sur fichier, d/r f2 : pointeur sur fichier)
	VARIABLES
		tmp : pointeur sur fichier
		c1 : charactère
		c2 : charactère
		diff : booleen
		ligne : entier
		colone : entier
		
		
	DEBUT
		ouvrir f1
		ouvrir f2
		c1 = premier caractère de f1
		c2 = premier caractère de f2
		TANT QUE c1 <> EOF && c2 <> EOF FAIRE
			diff = FAUX
			colone++
			SI c1 <> c2 ALORS
				diff = VRAI
			FINSI
			
			SI c1 != c2 ALORS
				
			FINSI
			
			//en fin de fichier
			SI c1 = 0 || c2 = 0 ALORS
				ligne++
				colone = 0
			FINSI
			
			c1 = charactère suivant du fichier f1
			c2 = charactère suivant du fichier f2
		FINTANTQUE
		
		SI c1 = EOF && c2 != EOF ALORS
			
		FINSI
		SI c1 != EOF && c2 = EOF ALORS
			
		FINSI
