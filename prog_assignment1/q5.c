#include<stdio.h>
#include<string.h>
		
void main()
	{	
		char str1[50]="hello to the world of c ";
		char str2[50]="hello world";
		char temp1[50],temp2[50],temp3[50],temp4[50];
		printf("String 1 : %s \n",str1);
		printf("String 1 : %s \n",str2);
		
		/*C String function – strlen
		strlen-It returns the length of the string without including end character*/
		printf("length of the 1st string %d:\n",strlen(str1));
		printf("length of the 1st string %d:\n",strlen(str2));

		/*C String function – strcmp
		It compares the two strings and returns an integer value. 
		If both the strings are same (equal) then this function would return 0 otherwise 
		it may return a negative or positive value based on the comparison.*/
		if (strcmp(str1, str2) ==0)
     	{
        	printf("\nstring 1 and string 2 are equal\n");
     	}
		else
    	{
         	printf("\nstring 1 and 2 are different\n");
    	}
 	
    	/*C String function – strncmp
		It compares both the string till n characters or 
		in other words it compares first n characters of both the strings.*/
    	if (strncmp(str1, str2, 8) ==0)
	    {
	        printf("\nstring 1 and string 2 are equal\n");
	    }
		else
	    {
	        printf("\nstring 1 and 2 are different\n");
	    }

		/*C String function – strcpy	
		It copies the string str2 into string str1, 
		including the end character (terminator char ‘\0’).*/
		strcpy(temp1,str1);
	    strcpy(temp2,str2);
	    
	    /*C String function – strcat
		It concatenates two strings and returns the concatenated string.*/
	    strcat(temp1,temp2);
    	printf("\nOutput string after concatenation: %s\n", temp1);

    	/*C String function – strchr
		It searches string for any character  */
    	printf ("\n%s\n", strchr(str1,'w'));
    	
    	/*C String function – strstr
		It is similar to strchr, 
		except that it searches for string srch_term instead of a single char.*/
    	printf ("\nOutput string is: %s\n", strstr(str1, str2));
	}	
