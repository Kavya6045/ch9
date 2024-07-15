#include<stdio.h>
#include<conio.h>

typedef struct student{
	char name[50];
	int rollno;
	int chemistry;
	int mathematics;
	int physics;
	float percentage;
}student;
void  main(){
	int i;
	student arr[6];
	arr[0].name;
	arr[0].rollno=427;
	arr[0].chemistry=95;
	arr[0].mathematics=80;
	arr[0].physics=85;
	
	arr[1].name;
	arr[1].rollno=428;
	arr[1].chemistry=99;
	arr[1].mathematics=89;
	arr[1].physics=80;
	
	arr[2].name;
	arr[2].rollno=429;
	arr[2].chemistry=95;
	arr[2].mathematics=85;
	arr[2].physics=90;
	
	arr[3].name;
	arr[3].rollno=430;
	arr[3].chemistry=80;
	arr[3].mathematics=70;
	arr[3].physics=70;
	
	arr[4].name;
	arr[4].rollno=431;
	arr[4].chemistry=90;
	arr[4].mathematics=75;
	arr[4].physics=70;
	
	arr[5].name;
	arr[5].rollno=432;
	arr[5].chemistry=90;
	arr[5].mathematics=82;
	arr[5].physics=86;
	
	
	
	for(i=0;i<6;i++)
	{
		printf("\nYour name  is ");
		scanf("%s",&arr[i].name);
		printf("\nYour roll no is %d",arr[i].rollno);
		printf("\nYour chemistry marks %d",arr[i].chemistry);
		printf("\nYour mathematics marks %d",arr[i].mathematics);
		printf("\nYour physics marks %d",arr[i].physics);
//		printf("Percentage: %.2f%%\n", &arr[i].percentage);
		printf("\n\n");
		
//			float percentage = (arr[i].chemistry + arr[i].mathematics + arr[i].physics) / 3.0;
	}
		for(i=0;i<6;i++)
	{
		float percentage = (arr[i].chemistry + arr[i].mathematics + arr[i].physics) / 3.0;
       
        printf("Percentage: %.2f%%\n\n", percentage);
   }
	
	getch();
}

