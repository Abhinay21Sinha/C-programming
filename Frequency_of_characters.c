#include<stdio.h>
int main(){
    int a[100]={0};
    char s[100];
    scanf("%s",s);
    for(int i=0;s[i]!='\0';i++)
        if(s[i]>=65 && s[i]<=90)
            a[s[i]-39]++;
        else if(s[i]>=97 && s[i]<=120)
            a[s[i]-'a']++;
    for(int i=0;i<52;i++)
        if(a[i]!=0 && i>=26)
            printf("frequency of %c is %d\n",(i+39),a[i]);
        else if(a[i]!=0 && i<26)
            printf("frequency of %c is %d\n",(i+97),a[i]);
}