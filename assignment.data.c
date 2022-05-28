#include<stdio.h>
int main()
{
    FILE *data;
    char name[20],address[50];
    int id, salary, tsalary, emp, i,total=0,total_salary=0;

    data= fopen("data.txt","a");

    if(data==NULL)
        printf("File does not exist!\n");

    else
    {
        printf("File opened--\n\n");

        printf("Enter the number of employees: ");
        scanf("%d",&emp);

        for(i=1; i<=emp; i++)
        {
            printf("\nEnter the employee's ID No.: ");
            scanf("%d",&id);

            printf("Enter the employee's name: ");
            scanf("%s",&name);

            printf("Enter the employee's address: ");
            scanf("%s",&address);


            printf("Enter the employee's salary: ");
            scanf("%d",&salary);

            tsalary=salary+(salary*0.1);


            total=total+salary;
            total_salary=total+(total*0.1);

            fprintf(data,"\n%d\t%s\t\t%s\t\t%d\n",id,name,address,tsalary);
        }

        fclose(data);
    }

    data=fopen("data.txt","a");
    fprintf(data,"\n\nTotal salary: %d",total);
    fprintf(data,"\nTotal salary after raise: %d",total_salary);


    fclose(data);

    getch();
}
