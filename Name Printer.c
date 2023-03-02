#include <stdio.h>
int main(){
    char hello[100];
    printf("Whats your name?\n");
    scanf("%s",hello);
    printf("Hello, %s\n", hello);
    return 0;
}
