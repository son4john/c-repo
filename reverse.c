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

// Reverse using the index [max - i] and don't forget to ignore termination string and then add at end.
void reverserUtility(int size, char *array){
    printf("Important Part of Program");
}

void reverseArray(char *array){
    int size;
    printf("The word is: %s\n",array);
    size = stringSize(array);
    printf("\nSize: %d\n",size);
    reverserUtility(size,array);
}


int main(){
    char word[] = "food";
	reverseArray(word);
}



