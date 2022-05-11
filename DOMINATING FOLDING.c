#include <stdio.h>
#include <string.h>

int main()
{
	int i,n,l=0;
	char a[100],b[50];
	printf("Enter a string and a series of folding instructions represented either as L or R:\n ");
	scanf("%s %s",a,b);
	n=strlen(a);
	int j,d;
	char str[20];
	printf("\nDOMINATING FOLDING: ");
	while(b[l]!='\0')
	{
		if(b[l]=='L')
		{
			if(n%2==0)
			{
				j=n/2,d=n/2-1;
			}
			else
			{
				j=n/2+1,d=n/2;
			}
			str[j]=NULL;
			for(i=0;i<j;i++)
			{
				if((int)a[i]>=(int)(a[(n-1)-i]))
				{
					str[d]=a[i];
					d--;
				}
				else
				{
					str[d]=a[(n-1)-i];
					d--;
				}			
			}
			n=strlen(str);
			for(i=0;i<n;i++)
			{
				a[i]=str[i];
			}
		}
		if(b[l]=='R')
		{
			if(n%2==0)
			{
				j=n/2,d=0;
			}
			else
			{
				j=n/2+1,d=0;
			}
			str[j]=NULL;
			for(i=0;i<j;i++)
			{
				if((int)a[i]>=(int)(a[(n-1)-i]))
				{
					str[d]=a[i];
					d++;
				}
				else
				{
					str[d]=a[(n-1)-i];
					d++;
				}			
			}
			n=strlen(str);
			for(i=0;i<n;i++)
			{
				a[i]=str[i];
			}
		}
		l++;
		printf("%s  ",str);
	}
	return 0;
}
