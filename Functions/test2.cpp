#include<stdio.h>

struct student{
    int age; 
    char name[50];
};

int main(){

    struct student s1, s2, s3;

    // Input
    scanf("%d %s", &s1.age, s1.name);
    scanf("%d %s", &s2.age, s2.name);
    scanf("%d %s", &s3.age, s3.name);

    // Output
    printf("Student1 -> age: %d\nStudent1 -> name: %s\n", s1.age, s1.name);
    printf("Student2 -> age: %d\nStudent2 -> name: %s\n", s2.age, s2.name);
    printf("Student3 -> age: %d\nStudent3 -> name: %s\n", s3.age, s3.name);

    return 0;
}