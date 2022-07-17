#include <stdio.h>
#include <stdlib.h>
#include <string.h>

size_t StringLength(const char* s){
    size_t length = 0;
    while(s[length] != '\0'){
        length++;
    }
    return length;
}

void StringAppend(char* dest, const char* src){
    size_t str1len = StringLength(dest);
    size_t str2len = StringLength(src);

    //version 1
    memcpy(dest+str1len, src, str2len);
    dest[str1len+str2len] = '\0'; 

    //version 2
    // char* newstring = (char*)realloc(dest, sizeof(char)* (str1len + str2len + 1));
    // //this step is not required
    // int i=0;
    // while(i<str1len){
    //     newstring[i] = dest[i];
    //     i++;
    // }

    // int j=0;
    // while(j<str2len){
    //     newstring[str1len+j] = src[j];
    //     j++;
    // }
    // newstring[str1len+str2len] = '\0';
}

int main(){
    //creating strings in c
    //1.
    char name[8] = {'D','h','a','n','u','s','h','\0'};
    printf("name = %s \n",name);
    char* msg = (char*)malloc(sizeof(char)*4);
    msg[0] = 'h';
    msg[1] = 'i';
    msg[2] = '!';
    msg[3] = '\0';
    printf("msg = %s\n",msg);

    //string inbuilt method
    printf("The length of the string msg is %ld\n", strlen(msg));
    
    printf("The length of the string msg is %ld\n", StringLength(msg));
    
    free(msg);
    //2. stirng literals, this is read only
    char* welcome = "Hello there how are you";
    printf("Welcome message = %s \n", welcome);

    //string length method
    printf("The length of the string name is %ld\n", StringLength(name));

    //testing append
    char* message = (char*)malloc(sizeof(char)*3);
    message[0] = 'h';
    message[1] = 'i';
    message[2] = '\0';
    StringAppend(message," there");
    printf("%s \n", message);
    return 0;
}