#include <stdio.h>
int counter (char *name){
int count = 0;
while (name[count]  != '\0'){
	count +=1;
}
return count;
}
int main(int argc, char *argv[])
{
	char karbar [13]="wahidshirdel";
	char karbar2 [16]="sayeadmadh";
    int d = counter(karbar);
    printf("%d",d);
	
	
}
