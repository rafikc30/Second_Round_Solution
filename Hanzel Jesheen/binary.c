//QUESTION 2
//BINARY SEARCH
//HANZEL JESHEEN

#include<stdio.h>


void main() {
	int i, t, n, min=0, max, mid, flag=0, pos;
	printf("Enter the number of terms in the array: ");
	scanf("%d", &t);
	int a[t];
	printf("Enter the terms in the array: ");
	for(i=0;i<t;++i) {
		scanf("%d", &a[i]);
	}
	printf("Enter the term to search: ");
	scanf("%d", &n);

	max = t-1;
	while(min<=max) {
		mid = (min + max)/2;
		if(a[mid] == n) {
			pos = mid;
			flag = 1;
			break;
		} else if(a[mid] <= n) {
			min = mid + 1;
		} else {
			max = mid - 1;
		}
	}

	if(flag) {
		printf("%d was found at position %d.\n", n, pos+1);
	} else {
		printf("%d was NOT found in the array.\n", n);
	}
}
