#include<stdio.h>
#include<string.h>
int main()
{       char a[30], final_string[50] = " ", t[3], sd, ed, x[2], s[4]="esc", d[4]="esc", y[2];
        int i = 0;
        printf("Enter String:");
        scanf("%s", a);
        printf("\nEnter starting delimiter:");
        scanf(" %c", &sd);
        printf("\nEnter ending delimiter:");
        scanf(" %c", &ed);
        x[0] = sd;
        x[1] = '\0';
        y[0] = ed;
        y[1] = '\0';
        strcat(final_string, x);
        for(i = 0; i < strlen(a); i++)
        {
            t[0] = a[i];
            t[1] = '\0';
            if(t[0] == sd){
                strcat(final_string, s);
                strcat(final_string, t);
            }
            else if(t[0] == ed){
			    strcat(final_string, d);
                strcat(final_string, t);
            }
            else{
			    strcat(final_string, t);
                strcat(final_string, " ");
            }
        }
        strcat(final_string, y);
        printf("\n After stuffing:%s", final_string);
        return 0;
    }