#include<stdio.h>
#include<conio.h>
#include<time.h>

int a[100];
int max, min;

void maxmin(int i, int j) {
	int max1, min1, mid;
	if(i==j) {
		max = a[i];
		min = a[j];
	} else if(i == (j-1)) {
		if(a[i] < a[j]) {
			max = a[j];
			min = a[i];
		} else {
			max = a[i];
			min = a[j];
		}
	} else {
		mid = (i+j)/2;
		maxmin(i, mid);
		max1 = max; min1 = min;
		maxmin(mid+1, j);
		if(min1 < min)
			min = min1;
		if(max1 > max)
			max = max1;
	}
}


int main() {
	int n;
	int i;
	clock_t st, end, total_t;
	clrscr();
                 st=clock();

	printf("Enter no of elements in array: ");
	scanf("%d", &n);

	printf("Enter elements: ");
	for(i=1; i<=n; i++) {
		scanf("%d", &a[i]);
	}

	maxmin(1, n);
	//max = max1; min=min1;

	printf("\nMax: %d", max);
	printf("\nMin: %d", min);
                  end=clock();
                  printf("\n Time taken to find the maximum and minimum number:%1d",total_t);


	getch();
}