#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int i=0;
int j=0;
int k = 0;
int chkstr(char* str) {
	while (str[i] != '\0')
	{
		i++;
	}
	return i;
}

int remove1(char* remove) {
	while (remove[j] != '\0')
	{
		j++;
	}
	return j;
}

int replace1(char* replace) {
	while (replace[k] != '\0')
	{
		k++;
	}
	return k;
}



int main() {
	int c = 0;
	int d;
	char str[256];
	char remove[256], replace[256];

	printf("INPUT STRING :");
	scanf("%s", str);
	chkstr(str);
	printf("INPUT REMOVE :");
	scanf("%s", remove);
	remove1(remove);
	printf("INPUT REPLACE :");
	scanf("%s", replace);
	replace1(replace);

	d = remove[0];
	if (j == 1 && k==1) {
		for (int m = 0; m < i; m++) {
			if (str[m] == remove[0]) {
				printf("%c", replace[0]);
			}
			else printf("%c", str[m]);
		}
	}
	else printf("ERROR");
	

}