#include<stdio.h>
#include<string.h>
#define maxn 1010

int a[maxn];

int main() {
	int n, k, first = 1;
	memset(a, 0, sizeof(a));//清零数组a
	scanf_s("%d%d", &n, &k);
	for (int i = 1; i <= k; i++)
	{
		for (int j = 1; j <= n; j++)
		{
			if (j%i==0)
			{
				a[j] = !a[j];
			}
		}
	}
	for (int i = 1; i <= n; i++)
	{
		if (a[i])
		{
			if (first)//控制最后没有多余空格
			{
				first = 0;
			}
			else
			{
				printf(" ");
			}
			printf("%d", i);
		}
	}
	return 0;
}
