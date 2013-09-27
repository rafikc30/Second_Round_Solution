//QUESTION 1
//COPY DATA
//HANZEL JESHEEN

#include<stdio.h>

void* copy(void* pFrom, void* pTo, int nBytes) {
	int i=0;
	for(i=0;i<nBytes;++i) {
		pTo = &pFrom;
		pFrom++;
		pTo++;
	}
	return;
}

void main() {
	char a[] = {'a', 'b', 'c'};
	char b[] = {'d', 'e', 'f'};
	char* first = &a[0];
	char* second = &b[0];
	copy(first, second, 2);
	printf("%c\n", b[0]);
}
