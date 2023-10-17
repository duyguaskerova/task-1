/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <string.h>
char str[100],sub[100];
int count=0,count1=0;
void main(){
    int i,j,k,k1,k2;
    scanf("%s",str);
    k1=strlen(str);
    scanf("%s",sub);
    k2=strlen(sub);
    for(i=0;i<k1;){
        j=0;
        count=0;
        while((str[i]==sub[j])){
            count++;
            i++;
            j++;
        }
        if(count==k2){
            count1++;
            count=0;
        }
        else
            i++;
    }
    printf("%s occurs %d times in %s",sub,count1,str);
}
