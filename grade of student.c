
#include <stdio.h>
#include <Windows.h>

int main()
{
    int math, phy, eng, avg, comp;
    printf("HELLO STUDENTS!\nThis is a program to check which stream you can get in MMCOE\n LET'S BEGIN ! \n");

    // marks for maths
    printf("Please enter your marks out of 100 in maths:\n");
    if (scanf("%d", &math) != 1 || math < 0 || math > 100) {
        printf("Error: Enter a valid number between 0 and 100.\n");
        while (getchar() != '\n'); 
        return 0; // 
    }
    Sleep(1000);

    // marks for physics
    printf("Please enter your marks out of 100 in physics:\n");
    if (scanf("%d", &phy) != 1 || phy < 0 || phy > 100) {
        printf("Error: Enter a valid number between 0 and 100.\n");
        while (getchar() != '\n'); 
        return 0; // 
    }
    Sleep(1000);

    // marks for computer science
    printf("Please enter your marks out of 100 in computer science:\n");
    if (scanf("%d", &comp) != 1 || comp < 0 || comp > 100) {
        printf("Error: Enter a valid number between 0 and 100.\n");
        while (getchar() != '\n'); 
        return 0; // 
    }
    Sleep(1000);

    // marks for English
    printf("Please enter your marks out of 100 in English:\n");
    if (scanf("%d", &eng) != 1 || eng < 0 || eng > 100) {
        printf("Error: Enter a valid number between 0 and 100.\n");
        while (getchar() != '\n'); 
        return 0; // 
    }
    Sleep(1000);

    avg = (math + phy + eng + comp) / 4;

    
     printf("*PLEASE WAIT I AM CALCULATING YOUR AVERAGE ......\n");
     scanf("The grading criteria is as follows:\n");
     scanf("A+ is for >90 marks And you can get Comp Branch\n");
     scanf("A is for >80 and <=90 marks And you can get Information Technology Branch\n");
     scanf("B+ is for >70 and <=80 marks And you can get AIDS Branch\n");
     scanf("B is for >60 and <=70 marks And you can get Electrical Branch\n");
     scanf("C+ is for >50 and <=60 marks And you can get Mechanical Branch\n");
     scanf("C is for >40 and <=50 marks And you can get Civil Branch\n");
     scanf("F is for anything below 40 marks And you can not get into MMCOE\n");
    Sleep(5000);


    
    
    if (avg >= 90)
    {
        printf("SMART STUDENT , your avg = %d \n", avg);
        Sleep(1000);
        printf("And your grade is A+ \n You can get Comp Branch\n");
        printf("WELCOME TO MMCOE ...\n");
    } 

    else if (avg >= 80 && avg < 90)
    {
        printf("your avg = %d \n", avg);
        Sleep(1000);
        printf("And your grade is A \n And you can get Information Technology Branch \n");
        printf("WELCOME TO MMCOE ...\n");
    } 

    else if (avg >= 70 && avg < 80)
    {
        printf("your avg = %d \n", avg);
        Sleep(1000);
        printf("And your grade is B+ \n And you can get AIDS Branch \n");
        printf("WELCOME TO MMCOE ...\n");
    } 

    else if (avg >= 60 && avg < 70)
    {
        printf("your avg = %d \n", avg);
        Sleep(1000);
        printf("And your grade is B \n You can get Electrical Branch \n");
        printf("WELCOME TO MMCOE ...\n");
    } 
    
    else if (avg >= 50 && avg < 60)
    {
        printf("your avg = %d \n", avg);
        Sleep(1000);
        printf("And your grade is C+ \n You can get Mechanical Branch\n");
        printf("WELCOME TO MMCOE ...\n");
    } 
   
    else if (avg >= 40 && avg < 50)
    {
        printf("your avg = %d \n", avg);
        Sleep(1000);
        printf("And your grade is C \n You can get Civil Branch\n");
        printf("WELCOME TO MMCOE ...\n");
    } 
    
    else 
    {
        printf(" your avg = %d \n", avg);
        Sleep(1000);
        printf("SORRY YOU ARE NOT ELLIGIBLE TO GET ADDMITION IN MMCOE !!! \n BETER LUCK NEXT TIME....\n");
    }
    Sleep(1000);
    printf("IF YOU WANT TO TAKE THE ADDMITION IN MMCOE THEN VISIT THE COLLEGE WEBSITE www.mmcoe.edu.in");
    return 0;

}
