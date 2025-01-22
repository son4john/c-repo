#include <stdio.h>
int main(){
	int reverser();
	int status;
	status = reverser("word");
}

int reverser(self)
    char self[];
{
	int stringSize();
    int size;
    
    size = stringSize(self);
    printf(self);
    printf("\nSize: %d\n",size);

	return 0;
}

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
