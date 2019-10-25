#include <stdio.h>
struct student
{
    char name[50];
    char roll[20];
    int age;
    int marks;
};
int main()
{
    int n,i;
	scanf("%d",&n);
	struct student arr[n];
	
    for(i=0; i<n; i++)
	scanf("%s %s %d %d",arr[i].name, arr[i].roll, &arr[i].age, &arr[i].marks);

    for(i=0; i<n; i++)
    {
        printf("%s\n", arr[i].name);
        printf("%s\n", arr[i].roll);
        printf("%d\n", arr[i].age);
        printf("%d\n", arr[i].marks);
    }	
    return 0;
}
 
