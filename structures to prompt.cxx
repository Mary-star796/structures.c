//structures
/*author: mary
regno:Ct101/G/23804/24
date:24/10/2024
*/
#include<stdio.h>
#include<string.h>
struct book{
	char title[30],author[30],ISBN[13];
	int publication_year;
	float price;};
	int main(){
		struct book b1;
		
		printf("enter title:");
		scanf("%s",b1.title);
		
		printf("enter author:");
		scanf("%s",b1.author);
		
		printf("enter ISBN:");
		scanf("%s",b1.ISBN);
		
		printf("enter publication_year:");
		scanf("%d",&b1.publication_year);
		
		printf("enter price:");
		scanf("%f",&b1.price);
		
		
		return 0;}
		
		