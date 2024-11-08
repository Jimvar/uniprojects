#include <stdio.h>
#include <math.h>
#include <time.h>

int main(){
    srand(time(NULL));
    int table[6] = {0};
    int stoixeio = rand()%49+1;
    table[0] = stoixeio;
    int pos = 1;
    int n = 1;
    int flag;
    while(n<6){
        flag = 0;
        stoixeio = rand()%49+1;
        for(int i = 0; i<pos; i++){
            if(table[i]==stoixeio){
                flag = 1;
                break;
            }
        }

        if(flag == 1){
            continue;
        }
        
        table[pos] = stoixeio;
        pos++;
        n++;
    }

    for(int i = 0; i<n; i++){
        printf("%d\n", table[i]);
    }

}