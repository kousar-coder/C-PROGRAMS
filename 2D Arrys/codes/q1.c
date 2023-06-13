#include <stdio.h>

int main() {
    int marks[5][3];  // 2D array to store marks
    int i, j, sum, max_avg, min_num, avg;

    // Loop to input marks
    for (i = 0; i < 5; i++) {
        printf("Enter marks for student %d:\n", i + 1);
        for (j = 0; j < 3; j++) {
            printf("Subject %d: ", j + 1);
            scanf("%d", &marks[i][j]);
        }
    }

    // Loop to calculate highest average and minimum number for each student
    for (i = 0; i < 5; i++) {
        sum = 0;
        min_num = 1;
        for (j = 0; j < 3; j++) {
            sum += marks[i][j];
            if (marks[i][j] < marks[i][min_num - 1]) {
                min_num = j + 1;
            }
        }
        avg = sum / 3;
        printf("Student %d: Highest average = %d, Minimum score in subject %d\n", i + 1, avg, min_num);
        if (i == 0 || avg > max_avg) {
            max_avg = avg;
        }
    }

    // Loop to calculate average of all students per subject
    for (j = 0; j < 3; j++) {
        sum = 0;
        for (i = 0; i < 5; i++) {
            sum += marks[i][j];
        }
        avg = sum / 5;
        printf("Subject %d: Average = %d\n", j + 1, avg);
    }

    return 0;
}

