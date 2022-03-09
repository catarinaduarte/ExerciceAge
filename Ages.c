#include<stdio.h> 
void main(){ 
int a; 
puts("Digite a sua idade"); 
scanf("%d",&a); 
if(a<=18) 
printf("Menor de Idade"); 
else 
if(a<=65) 
printf("Maior de Idade"); 
else 
printf("Maior de 65 anos");
} 