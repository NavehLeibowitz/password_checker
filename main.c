#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdbool.h>


#define MAX_LIMIT 20

bool string_validator(char str[]){
    bool upper_char_indication = false;
    bool lower_char_indication = false;
    bool special_char_indication = false;
    for(int i = 0; i < strlen(str) - 1; i++){
        if(isupper(str[i])){
            upper_char_indication = true;
        }
        else if(islower(str[i])){
            lower_char_indication = true;
        }
        else if(!isdigit(str[i])) {
            special_char_indication = true;
        }
    }
    if(upper_char_indication && lower_char_indication && special_char_indication){
        return true;
    }
    else{
        return false;
    }
}

int main() {
    char str[MAX_LIMIT];
    printf("enter the password:");
    fgets(str, MAX_LIMIT, stdin);
    if(string_validator(str)){
        printf("valid password");
    }
    else{
        printf("invalid password");
    }

    return 0;
}


