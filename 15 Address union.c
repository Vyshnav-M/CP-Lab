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
  
}
