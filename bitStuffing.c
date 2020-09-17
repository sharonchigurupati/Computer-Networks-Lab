#include<stdio.h>
#include<string.h>
int main()
{
 int i=0,count=0;
 char bits[100];
 char flag[8]="01111110"; 
 printf("Enter input string: ");
 scanf("%s",bits);
 
  printf("%s",flag);
 for(i=0; i<strlen(bits); i++)
 {
    if(bits[i]=='1'){
        count++;
    }
    else{
	    count=0;
	}
    printf("%c",bits[i]);
    if(count==5)
    {
        printf("0");
        count=0;
    }
 }
 printf("%s",flag);
 return 0;
}