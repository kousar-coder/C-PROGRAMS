#include <stdio.h>

#define MAX_DEPTS 10
#define MAX_FACULTY 50

int main()
{
    int X, Y, i, j, k;
    int faculty[MAX_DEPTS][MAX_FACULTY][3]; // 3D array to store faculty info for each department
    int min_salary = 100000000, min_salary_id = -1;
    int max_salary = -1, max_salary_age = -1;
    int max_salary_dept = -1, max_salary_sum = -1;

    // Take input for number of departments and faculty per department
    printf("Enter number of departments: ");
    scanf("%d", &X);
    printf("Enter number of faculty per department: ");
    scanf("%d", &Y);

    // Take input for faculty information for each department
    for (i = 0; i < X; i++) {
        printf("Enter information for department %d:\n", i+1);
        for (j = 0; j < Y; j++) {
            printf("Enter faculty ID, age and salary for faculty %d: ", j+1);
            scanf("%d %d %d", &faculty[i][j][0], &faculty[i][j][1], &faculty[i][j][2]);

            // Update minimum salary and corresponding faculty ID
            if (faculty[i][j][2] < min_salary) {
                min_salary = faculty[i][j][2];
                min_salary_id = faculty[i][j][0];
            }

            // Update maximum salary and corresponding age
            if (faculty[i][j][2] > max_salary) {
                max_salary = faculty[i][j][2];
                max_salary_age = faculty[i][j][1];
            }

            // Update department with maximum total salary
            int dept_salary_sum = 0;
            for (k = 0; k < Y; k++) {
                dept_salary_sum += faculty[i][k][2];
            }
            if (dept_salary_sum > max_salary_sum) {
                max_salary_sum = dept_salary_sum;
                max_salary_dept = i+1;
            }
        }
    }

    // Print faculty information for each department
    printf("\nFaculty information:\n");
    for (i = 0; i < X; i++) {
        printf("Department %d:\n", i+1);
        for (j = 0; j < Y; j++) {
            printf("%d %d %d\n", faculty[i][j][0], faculty[i][j][1], faculty[i][j][2]);
        }
    }

    // Print results
    printf("\nFaculty with lowest salary: %d\n", min_salary_id);
    printf("Age of faculty with highest salary: %d\n", max_salary_age);
    printf("Department with highest total salary: %d\n", max_salary_dept);

    return 0;
}

