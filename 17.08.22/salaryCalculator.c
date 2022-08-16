#include<stdio.h>

int main()
{
    int employeesID, workedHour, salaryPerHour;
    float totalSalary;

    //Get employeeID input from user
    printf("Enter your ID: ");
    scanf("%d", &employeesID);

    //Get work hour input from user
    printf("Enter your Work Hour: ");
    scanf("%d", &workedHour);


    //Get salary input from user
    printf("Enter your salary Per hour: ");
    scanf("%d", &salaryPerHour);

    //calculate salary
    totalSalary = workedHour * salaryPerHour;

    //Print output
    printf("\nYour ID: %d", employeesID);
    printf("\nYour total salary: %.2f", totalSalary);

    return 0;
}
