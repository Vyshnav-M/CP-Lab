#include<stdio.h>
#include<string.h>
void main()	
{		
  int vcount=0,ccount=0,scount=0,i;
  char str[50];
  printf("Enter a string: ");
  gets(str);
  for(i=0;i<strlen(str);i++)
  	{				
      if(str[i]==' ')
       	scount++;				
   	  else if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U')	
     	vcount++;		
  	  else if((str[i]>'a'&&str[i]<'z')||(str[i]>'A'&&str[i]<'Z'))		
      	ccount++;
  	}
	printf("\nVowels: %d \nConsonants: %d \nWhitespaces: %d \n",vcount,ccount,scount);
}
