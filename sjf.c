#include<stdio.h>
#include<string.h>
#include<unistd.h>
#include<stdlib.h>
#include<sys/types.h>

int main()
{
    char arr[10][5], temp[5];
    int c=0, pt[10], i,j,temp1,n;
    float bst=0.0, tat=0.0;
    printf("Enter the no of process :");
    scanf("%d", &n);
    for(i=0; i<n; i++)
    {
        printf("Enter the process %d name: ",i+1);
        scanf("%s", &arr[i]);
        printf("Enter the process time: ");
        scanf("%d" , &pt[i]);
    }
    for(i=0; i<n-1; i++)
    {
        for(j=i+1; j<n; j++)
        {
            if(pt[i]>pt[j])
            {
                temp1=pt[i];
                pt[i]=pt[j];
                pt[j]=temp1;
                strcpy(temp,arr[i]);
                strcpy(arr[i],arr[j]);
                strcpy(arr[j], temp);
            }
        }
    }
    for(i=0; i<n; i++)
    {
        bst=bst + c;
        tat=tat + c +pt[i];
        c=c + pt[i];
        // printf("\t\t %d", c);
    }
    printf("\n Average time is %.2f: ", bst/n);
    printf("\n Turn around time is %.2f ", tat/n);
    return 0;
}