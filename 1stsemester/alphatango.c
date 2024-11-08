#include <stdio.h>

int main(){
    char table[26][10] = {"alpha", "bravo", "charlie", "delta", "echo", "foxtrot", "golf", "hotel", "india", "juliet", "kilo", "lima", "mike", "november", "oscar", "papa", "quebec", "romeo", "sierra", "tango", "uniform", "victor", "whiskey", "x-ray", "yankee", "zulu"};
    char text[1000];
    int counter = 0;
    char c;
    printf("Give sentence \n");
    while((c=getchar())!= '.'){
        text[counter] = c;
        counter++;
    }

    for(int j = 0; j< counter; j++){
        if(text[j]>='A' && text[j]<='Z'){
            printf("%s ", table[text[j] - 'A']);
        }
        else if(text[j]>='a' && text[j]<='z'){
            printf("%s ", table[text[j] - 'a']);
        }
        else if(text[j]>='1' && text[j]<='9'){
            for(int k = 0; k<=text[j] - '1'; k++){
                putchar('*');
            }
            putchar(' ');
        }
        else if(text[j]=='0'){
            continue;
        }
        else if(text[j]==' '){
            continue;
        }
        else{
            printf("%c", text[j]);
            if(text[j+1]==' '){
                putchar(' ');
                j++;
            }
        }

    }
    putchar('.');

}
