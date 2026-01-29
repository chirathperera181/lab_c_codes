#include<stdio.h>
#include<string.h>
struct student{
		int id_no;
		char name[20];
		char address[20];
		char combination[5];
		int age;	
	
	}newstudent;
int main(){
	struct student sc;
	sc.id_no=001;
	strcpy(sc.name,"Chirath Perera\n");
	strcpy(sc.address,"Wellampitiya\n");
	strcpy(sc.combination,"Maths\n");
	sc.age=100;	
	printf("student details\n");
	printf("\nId num:%d \n\nName:%s	\naddress:%s	\nCombinatio:%s \nAge:%d\n",sc.id_no,sc.name,sc.address,sc.combination,sc.age);

return 0;
}
