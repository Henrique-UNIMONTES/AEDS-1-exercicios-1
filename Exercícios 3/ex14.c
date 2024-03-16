#include <stdio.h>

int main()
{
    const int USER_CODE = 1234, PASSWORD = 9999;
    int user, pass;
    
    printf("User: ");
    scanf("%d", &user);
    
    if (user != USER_CODE) {
        printf("User invalid!");
        return 0;
    }
    
    printf("Password: ");
    scanf("%d", &pass);
    
    if (pass != PASSWORD) {
        printf("Incorrect password!");
        return 0;
    }
    
    else {
        printf("You're logged in");
    }
}
