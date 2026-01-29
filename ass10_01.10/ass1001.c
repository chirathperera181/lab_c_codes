#include<stdio.h>
#include<string.h>

struct lib_books{
	char title[20];
	char auther[15];
	int pages;
	float price;	
	
};

int main(){
	struct lib_books book1;
	strcpy(book1.title,"Introduction to c");
	strcpy(book1.auther,"Dennis");
	book1.pages=100;
	book1.pages=450.00;
	printf("Book Details");
	printf("\n Title: %s\nAuthor: %s\nNo of pages: %d\nPrice:%2f\n",book1.title,book1.auther,book1.pages,book1.price);


return 0;
}
