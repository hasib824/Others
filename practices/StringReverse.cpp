#include<bits/stdc++.h>

void reverse(char *str,int low,int high)
{
    while(low<high)  // If high and low becomes same then the element at that index is the median . No need to swap
    {
        char temp = str[low];
        str[low++] = str[high];
        str[high--] = temp ;
    }
}


int main()
{
    printf("Please enter a string  : ");
    char ch[100];
    gets(ch);
    reverse(ch,0,strlen(ch)-1);
    printf("Reversed String \n");
    puts(ch);
    return 0;
}
