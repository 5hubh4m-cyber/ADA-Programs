#include<stdio.h>
#include<conio.h>

int gcd(int m, int n) {
	if(n == 0)
		return m;
	else if(n>m)
		return gcd(n, m);
	else
		return gcd(n, m%n);
}

void main() {
	int n, m;
	int ans;
	clrscr();

	printf("Enter n and m values: ");
	scanf("%d %d", &m, &n);

	ans = gcd(m, n);

	printf("%d", ans);

	getch();
}