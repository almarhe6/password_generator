#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void generate_password(char *password, int n);

int main(int argc, char *argv[]){

	if (argc != 2){
		printf("Usage: ./main n \n");
		return -1;
	}

	int n = atoi(argv[1]);
	char* password = (char*) malloc((n+1)*sizeof(char));
	generate_password(password, n);
	printf("%s \n", password);
	free(password);

	return 0;
}

	
void generate_password(char *password, int n){
	srand(time(NULL));
	char random_char;

	while(n-- >= 0){
		// In the extended ascii table, the english chars 
		// go from 33 to 94
		*password++ = (33 + rand()%94);
	}
	

	*password = '\0';

}


