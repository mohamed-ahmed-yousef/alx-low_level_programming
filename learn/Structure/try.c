#include <stdio.h>
typedef unsigned char s;
typedef struct User
{
    char *name;
    char *email;
    int age;
} users;
int main(void)
{
    struct User user;
    struct User *ptr;
    users user2;
    ptr = &user;
    ptr -> name = "maohemd";
    ptr -> email = "maoyhdadf";
    ptr -> age = 35;
    // user.name="mohamed";
    // user.eamil="modyousef@gmail.com";
    // user.age = 34;
    printf("%s", (*ptr).name);
    return (0);
}