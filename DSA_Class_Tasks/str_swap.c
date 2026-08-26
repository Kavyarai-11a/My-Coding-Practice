#include<stdio.h>
#include<string.h>
int swap_pal_str(char *str) {
    char temp;
    int l = strlen(str);
    //printf("%d\n",l);
    for(int i=0;i<l/2;i++) {
        temp = *(str + i);
        *(str + i) = *(str - i + l - 1);
        *(str - i + l - 1) = temp;
    }

    for(int i=0;i<l/2;i++) {
        if(*(str + i) != *(str - i + l - 1)) {
            return 0;
        }
    }
    return 1;
}

int main() {
    char str[100];
    int result;

    printf("Enter a string : ");
    scanf("%s",str);

    result = swap_pal_str(str);

    printf("Reversed string : %s\n",str);

    if(result == 0) {
        printf("String is not a palindrome\n");
    }
    else {
        printf("String is a palindrome\n");
    }
    return 0;
}