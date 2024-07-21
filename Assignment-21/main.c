# include <stdio.h>
# include <stdlib.h>
# define initial 64

struct employee {
    char *first_name;
    char *last_name;
    int employee_id;
    int ssn;
    char *job_title;
};

struct member {
    struct employee employee1;
    struct employee employee2;
} engineering_dept;

void print_employee(struct employee *a);

int main(void){
    int try = 1;
    engineering_dept.employee1.first_name = malloc(initial * sizeof(char));
    engineering_dept.employee1.last_name = malloc(initial * sizeof(char));
    engineering_dept.employee1.job_title = malloc(initial * sizeof(char));

    engineering_dept.employee2.first_name = malloc(initial * sizeof(char));
    engineering_dept.employee2.last_name = malloc(initial * sizeof(char));
    engineering_dept.employee2.job_title = malloc(initial * sizeof(char));

    struct employee *employee = &engineering_dept.employee1;
    // created as pointer so user can access employee1 attribute indirectly.

    for (int i = 0; i < 2; i++)
    {
        printf("Enter the employee's first name: ");
        scanf("%s",employee->first_name);
        // not giving memory address since we already give pointer
        printf("Enter the employee's last name: ");
        scanf("%s",employee->last_name);
        printf("Enter the employee's ID number: ");
        scanf("%i",&employee->employee_id);
        // give memory address since its not a pointer
        printf("Enter the last four digits of the employee's SSN: ");
        scanf("%i",&employee->ssn);
        printf("Enter the employee's job title (do not include the word 'Engineer'): ");
        scanf("%s",employee->job_title);
        if (try == 1){
            employee = &engineering_dept.employee2;
            try--;
        }
        puts("");
    }

    try = 1;
    employee = &engineering_dept.employee1;

    for (int i = 0; i < 2; i++)
    {
        print_employee(employee);
        if (try == 1){
            employee = &engineering_dept.employee2;
            try--;
        }
        puts("");
    }

    free(engineering_dept.employee1.first_name);
    free(engineering_dept.employee1.last_name);
    free(engineering_dept.employee1.job_title);

    free(engineering_dept.employee2.first_name);
    free(engineering_dept.employee2.last_name);
    free(engineering_dept.employee2.job_title);

    return 0;
}

void print_employee(struct employee *a){
    printf("Employee information for %s %s \n",a->first_name,a->last_name);
    printf("ID: %i\n",a->employee_id);
    printf("SSN: %i\n",a->ssn);
    printf("Title: %s Engineer\n",a->job_title);
}