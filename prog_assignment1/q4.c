#include<stdio.h>
#include<string.h>
		
void main()
	{	
		char str[20],temp1[20],temp2[20],temp3[20],temp4[20];
		int n,i;
		printf("Enter your word ");
		gets(str);
		n=strlen(str);
		strcpy(temp1,str);
		strcpy(temp2,str);
		strcpy(temp3,str);
		strcpy(temp4,str);
			
		for(i=0;i<n;i++)
		{
			if(i==0 && temp1[i] !=' ' || temp1[i]!=' ' && temp1[i-1]==' ')	
			{
				if(temp1[i]>='a' && temp1[i]<='z')
				{
					temp1[i]-=32;
				}
			}
		}
		printf("\n\n String 1 :%s",temp1);
		
		for(i=0;i<n;i++)
		{
			if(i==0 && temp2[i] !=' ')	
			{
				if(temp2[i]>='a' && temp2[i]<='z')
				{
					temp2[i]-=32;
				}
			}
		}
		printf("\n String 2 :%s",temp2);
		printf("\n String 3 :%s",temp3);
		for(i=0;i<n;i++)
		{
			if(temp4[i]>='a' && temp4[i]<='z')
				{
					temp4[i]-=32;
				}
			else if(temp4[i]>='A' && temp4[i]<='Z')
				{
					temp4[i]+=32;
				}
		}
		printf("\n String 4 :%s",temp4);
		
	}	
