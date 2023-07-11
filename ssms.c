#include<stdio.h>
#define MAX_STUDENTS 3
#include<string.h>
int main(){
	int countofstudents=0,options;
	//printf("Option 1: Add a student\nOption 2: Display all students\nOption 3: Find the highest-scoring student\nOption 4: Exit the program\n");
	scanf("%d",&options);
	while(options!=4){
		switch(options){
		case 1:
			if(countofstudents>=MAX_STUDENTS){
				printf("Maximum number of students reached.\n");
			}
			else{
				addStudent(countofstudents);
				countofstudents++;
				
			}
			scanf("%d", &options);
			break;
		case 2:
			if(countofstudents==0){printf("No Record found\n");return 1;}
			printf("List of students:\n");
			for(int i=0;i<countofstudents;i++){
				printf("Student %d\n",i+1);
				displayStudents(i);
			}
			scanf("%d",&options);
			break;
		case 3:
			findHighestScoringStudent(countofstudents);
			scanf("%d",&options);
			break;
		default:
			printf("Invalid Choice\n");
			scanf("%d",&options);
		}
	}
	printf("Exiting the program. Thank you for using our system!\n");
	return 0;
}

struct student{
	char name[100];
	int age;
	enum s{
		A=1,B,C,D,F
	}score;
}Student[MAX_STUDENTS];

int addStudent(int countofstudents){
	//printf("Enter name of student %d\n",countofstudents+1);
	scanf("%s",Student[countofstudents].name);
	//printf("Enter age of student %d\n",countofstudents+1);
	scanf("%d",&Student[countofstudents].age);
	//printf("Enter Score of student %d\n",countofstudents+1);
	char gradeofstudent;
	//getchar();
	scanf(" %c",&gradeofstudent);
	if(gradeofstudent=='A'){Student[countofstudents].score=1;}
	else if(gradeofstudent=='B'){Student[countofstudents].score=2;}
	else if(gradeofstudent=='C'){Student[countofstudents].score=3;}
	else if(gradeofstudent=='D'){Student[countofstudents].score=4;}
	else if(gradeofstudent=='F'){Student[countofstudents].score=5;}
	else{printf("Invalid Score\n");return 0;}
	printf("Student added successfully.\n");
	return 0;
}

int displayStudents(int i){

		
		printf("Name: %s\n",Student[i].name);
		printf("Age: %d\n",Student[i].age);
		if(Student[i].score==1){printf("Score: A\n");}
		else if(Student[i].score==2){printf("Score: B\n");}
		else if(Student[i].score==3){printf("Score: C\n");}
		else if(Student[i].score==4){printf("Score: D\n");}
		else if(Student[i].score==5){printf("Score: F\n");}
		printf("\n");
}

int findHighestScoringStudent(int countofstudents){
	if(countofstudents==0){printf("No Record found\n");return 1;}
	int max=Student[0].score,j=0;
	for(int i=0;i<countofstudents;i++){
		if(max>Student[i].score){
			max=Student[i].score;
			j=i;
			}
		}
	printf("Highest-scoring student:\n");
	displayStudents(j);
}

/*
1
Ramaguru
33
F
1
Feroz
23
C
1
Harika
23
C
1
Ramaguru
33
F
2
4
*/
