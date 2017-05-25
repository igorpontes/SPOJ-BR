#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int countDigits(int num);
int verify(char *num, int original);
char* stringNum();
int* fillArray();
char* convertNumToString(int num);

int main(int argc, char const *argv[]){

	int *vals = fillArray();

	int i = -1;
	while(vals[++i] != '\0'){
		int numQuadrado = vals[i] * vals[i];
		char* numS = convertNumToString(numQuadrado);

		verify(numS, vals[i]);
	}

	return 0;
}

int* fillArray(){
	int num = -1, *vals = NULL, count = 0;

	for(;;){

		if(num == 0){
			vals[count] == '\0';
			break;
		}else{
			vals = realloc(vals, (count + 1) * sizeof(int));

			scanf("%i", &num);
			vals[count] = num;

			count++;
		}
	}

	return vals;
}

char* convertNumToString(int num){

  char* buff = malloc(countDigits(num)*sizeof(char));
	sprintf(buff, "%i", num);

  return buff;
}

int countDigits(int num){
	int count = 0;

	while(num != 0){
		num /= 10;
		count++;
	}

	return count;
}

int verify(char *num, int original){

	int i;
	char* firstStrin = malloc(strlen(num) * sizeof(char));
	char* secondStrin = malloc(strlen(num) * sizeof(char));

	for(i = 0; i < strlen(num); i++){
		firstStrin[i] = num[i];
		memcpy(secondStrin, &num[i+1], strlen(num) - i);

		if((atoi(firstStrin) + atoi(secondStrin) == original && atoi(firstStrin) > 0 && atoi(secondStrin) > 0) || original == 1 ){
			free(firstStrin);
			free(secondStrin);
			free(num);

			printf("%i: %c\n", original, 'S');

			return 1;
		}

	}

	free(firstStrin);
	free(secondStrin);
	free(num);

	printf("%i: %c\n", original, 'N');

	return 0;
}
