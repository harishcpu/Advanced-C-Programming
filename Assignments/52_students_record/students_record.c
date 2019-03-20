/* Title : Students Record
 * Author : Harish
 * Date : 15 Jan
 * Description : Get subjects list, students' name and marks, print the average marks.
 */

#include <stdio.h>
#include <stdlib.h>
#include "colors.h"

typedef struct _Students
{
    char *name;
    int *marks;
} Students;

/* PrintInfo: print the student record */
void PrintInfo(char *subjects[], Students *students, int n_subjects, int n_students)
{
    printf("%-15s", "List of Subjects");
    for (int i = 0; i < n_students; i++)
        printf("%14s", (students + i)->name);
    putc('\n', stdout);
    printf("--------------------------------------------" "\n");
    for (int i = 0; i < n_subjects; i++) {
        printf("%s \t", *(subjects + i));                                       /* print the subject name */
        for (int j = 0; j < n_students; j++) {
            printf("%14d", *((students + j)->marks + i));                       /* print the list of marks */
            if (i)
                *((students + j)->marks) += *((students + j)->marks + i);       /* calculate the average of marks */
        }
        putc('\n', stdout);
    }
    printf("--------------------------------------------" "\n");
    printf("%-15s", "Average");
        for (int j = 0; j < n_students; j++)
            printf(" %14.2f ", (float)(*(students + j)->marks) / n_subjects);   /* print the average marks */
    putc('\n', stdout);
}

/* GetInfo: get the student info */
void GetInfo(char *subjects[], Students *students, int n_subjects, int n_students)
{
    printf("Enter the Name of \n");
    for (int i = 0; i < n_subjects; i++) {              /* get the n_subjects */
        getchar();
        printf("%d subject : ", i + 1);
        scanf("%m[^\n]s", &(*(subjects + i)));
    }

    for (int i = 0; i < n_students; i++) {
        getchar();
        printf("\nName of the %d student : ", i + 1);
        scanf("%m[^\n]s", &(students + i)->name);       /* get the n_students' names and marks */
       
        printf("Marks in \n");
        (students + i)->marks = (int *)malloc(sizeof(int ) * n_subjects);
        for (int j = 0; j < n_subjects; j++) {
            printf("%s : ", *(subjects + j));
            getchar();
            scanf("%d", (students + i)->marks + j);
        }
    }
}

int main()
{
    int n_subjects, n_students;
    printf("Enter the number of Subjects : ");
    scanf("%d", &n_subjects);                       /* read no. of subjects */

    char *subjects[n_subjects];

    printf("Enter the number of Students : ");
    scanf("%d", &n_students);                       /* read no. of students */

    Students students[n_students];
   
    GetInfo(subjects, students, n_subjects, n_students);
    printf("--------------------------------------------" "\n");
    PrintInfo(subjects, students, n_subjects, n_students);
    printf("--------------------------------------------" "\n");
    
    return 0;
}













/*    for (int i = 0; i < n_students; i++) {
        for (int j = 0; j < n_subjects; j++)
            printf(" %d ", *((students + i)->marks + j));

    }
*/
