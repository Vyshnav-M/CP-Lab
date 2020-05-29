#include<stdio.h>
#include<string.h>
#define C_SIZE 50
union address
{
 char name[C_SIZE];
 char house_name[C_SIZE];
 char city_name[C_SIZE];
 char state[C_SIZE];
 char pin[C_SIZE];
}person;
int main()
{
   printf("Enter the name:\n"); 
   gets(person.name);
   printf("Enter the house name:\n"); 
   gets(person.house_name);
   printf("Enter the city name:\n"); 
   gets(person.city_name);
   printf("Enter the state name:\n"); 
   gets(person.state);
   printf("Enter the pin:\n"); 
   gets(person.state);
   printf("The address of person is:\n");
   printf("Name:%s\nHouse Name:%s\nCity:%s\nState:%s\nPIN:%s\n",person.name,person.house_name,person.city_name,person.state,person.state);
   return 0;
}

/*    
    In union, only one member is accesable at a time.
    So in the output, it will print the PIN for all the entries of the address.
    So to get the desired out put, the main function can be modified as below....
int main()
{
   char address[100]="";
   printf("Enter the name:\n"); 
   gets(person.name);
   strcat(address,"\nName :\t ");
   strcat(address,person.name);
   printf("Enter the house name:\n"); 
   gets(person.house_name);
   strcat(address,"\nHouse Name:\t ");
   strcat(address,person.house_name);
   printf("Enter the city name:\n"); 
   gets(person.city_name);
   strcat(address,"\nCity:\t ");
   strcat(address,person.city_name);
   printf("Enter the state name:\n"); 
   gets(person.state);
   strcat(address,"\nState:\t ");
   strcat(address,person.city_name);
   printf("Enter the pin:\n"); 
   gets(person.pin);
   strcat(address,"\nPIN:\t ");
   strcat(address,person.pin);
   puts(address);
   return 0;
}
*/
