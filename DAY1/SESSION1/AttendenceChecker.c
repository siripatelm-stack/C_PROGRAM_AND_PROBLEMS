#include <stdio.h>

int main()
{
    char name[20] ;
    int class_attended, total_classes;
    float percentage;
    scanf("%s %d %d",name, &class_attended, &total_classes);
    percentage = (class_attended*100.0)/total_classes;

    if (percentage>=75.0)
        printf("%s has %f attendence , so eligable for exams\n",name, percentage);
    else
        printf("%s has %f attendence , so not eligable for exams\n",name, percentage);
    return 0;
}