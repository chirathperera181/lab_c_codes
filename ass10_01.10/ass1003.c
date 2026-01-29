#include<stdio.h>
#include<string.h>
typedef struct lib_books{
		char title[20];
		char auther[15];
		int pages;
		float price;
	};lib_books
	
	
int main(){
	lib_books book1={"Introduction to C","Arther",200,560.00};
	printf("Book Details");
	printf("\nTitle:%s \nNo of Pages:%d \nAuther:%s\nPrice:%.2f\n",book1.title,book1.pages,book1.auther,book1.price);
		
return 0;
}
