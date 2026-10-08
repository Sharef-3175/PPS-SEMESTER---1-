#include<stdio.h>
int main()
{
    const int Username = 123;
    const int Password = 321;
    int Username_ip, Password_ip;
    printf("Enter Username & Password\n");
    scanf("%d%d", &Username_ip, &Password_ip);
if(Username == Username_ip && Password == Password_ip)
    {
        printf("User Is Authorized");
        }
else
    { printf("User Is Not Authorized");
    }
    return 0;
}
