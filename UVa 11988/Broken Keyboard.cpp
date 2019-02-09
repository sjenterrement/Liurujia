//unknown
#include<cstdio>
#include<cstring>
using namespace std;
const int maxn = 100000 + 5;
int last, cur, next[maxn];
char s[maxn];

int main() {
	while (scanf_s("%s",s+1,30)==1)//用来记录字符串的长度
	{
		int n = strlen(s + 1);
		last = cur = 0;
		next[0] = 0;

		for (int i = 1; i <= n; i++)
		{
			char ch = s[i];
			if (ch=='[')
			{
				cur = 0;
			}
			else if (ch==']')
			{
				cur = last;
			}
			else {
				next[i] = next[cur];
				next[cur] = i;
				if (cur==last)
				{
					last = i;
				}
				cur = i;
			}
		}
		for (int i = next[0]; i!=0; i=next[i])
		{
			printf("%c", s[i]);
		}
		printf("\n");
	}
	return 0;
}
