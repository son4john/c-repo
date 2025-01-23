#include <stdio.h>

int stringSize(self)
    char self[];
{
    int i = 0;
    while (self[i] != '\0'){
        i++;
    }
    return i;
}

void reverserUtility(int size, char *array){
    printf("String Reversed: ");
    int j;
    for(j=size - 1; j >= 0; j--){
        printf("%c", array[j]);
    }
    printf("\n");
}

void reverseArray(char *array){
    int size;
    printf("The word is: %s\n",array);
    size = stringSize(array);
    printf("Size: %d\n",size);
    reverserUtility(size,array);
}

int main(){
    char word[] = "Johnson";
	reverseArray(word);
}



