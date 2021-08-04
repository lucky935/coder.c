#include <stdio.h>

struct student
{
    int rollno;
    char section;
    int age;

};


int main(){
    struct student stu1;
    int var1;
    var1=13;
    stu1.rollno=34;
    stu1.section='f';
    stu1.age=20;



    printf("the value of variable var1 is %d\n",var1);
    printf("the value of rollno for stu1 is %d\n",stu1.rollno);
    printf("the value of section for stu1 is %c\n",stu1.section);
    printf("the value of age for stu1 is %d\n",stu1.age);

    
    return 0;
}
