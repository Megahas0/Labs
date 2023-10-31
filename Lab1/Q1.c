#include <stdio.h>
#include <stdlib.h>

int main()
{
 int employeeID;
    float hoursWorked, hourlyRate, salary;

    printf("Enter employee's ID: ");
    scanf("%d", &employeeID);
    printf("Enter total worked hours in a month: ");
    scanf("%f", &hoursWorked);
    printf("Enter the amount received per hour: ");
    scanf("%f", &hourlyRate);
    salary = hoursWorked * hourlyRate;
    printf("Employee ID: %d\n", employeeID);
    printf("Salary for the month: %.2f\n", salary);

    return 0;
}

