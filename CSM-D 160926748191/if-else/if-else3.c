#include <stdio.h>
int main () {
    float marks;
    printf("Enter Marks (0-100): ");
    scanf("%f", &marks);
    if (marks<0 || marks>100){
            printf("Invalid Marks./n");
    }
            else if (marks< 40) {
            printf("Result: Fail/n");
            printf("Grade: F/n");
            }
            else if (marks< 90) {
            printf("Result: Passed/n");
            printf("Grade: A+/n");
            }
            else if (marks< 80) {
            printf("Result: Passed/n");
            printf("Grade: A/n");
            }
            else if (marks< 70) {
            printf("Result: Passed/n");
            printf("Grade: B+/n");
             }
            else if (marks< 60) {
            printf("Result: Passed/n");
            printf("Grade: B/n");
            }
            else if (marks< 50) {
            printf("Result: Passed/n");
            printf("Grade: C/n");
            }
            else {
                    printf("Result: Pass\n");
                    printf("Grade: D\n");
            }
            return 0;
}
