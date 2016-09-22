#include<stdio.h>
int main()
{
	char str[10000];
	scanf("%[^\n]s",str);
	int i,n,c=0,len=strlen(str);
	scanf("%d",&n);
	for(i=0;i<len;i++)
	{
		if(str[i]==' ') {
			c++;
			int j=0,l=0;
			for(j=i+1;j<len;j++,l++)
			 if(str[j]==' ')
			   break;
			if(l>n-c) {
				printf("\n");
				if(str[i+1]==' ')
				c=-1;
				else
				c=0;
				i++;
			}
		}
		c++;
		printf("%c",str[i]);
	}
	return 0;
}
