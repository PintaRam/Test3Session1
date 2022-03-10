#include<stdio.h>
#include<string.h>
void input();
int count();
void output();

int main()
{
    char string;
    input(string);
  count(string)
  
    return 0;
}

void input(char *a)
{
    size_t size 100;
   // a = (char*) malloc(size);
    char **b = &a;
    size_t c = getline(b,&size,stdin);
}

int count(char *string)
{
  int count = 0;
while((char word[100] = strtok(string, " ,\".-"))) {
    string = '\0';
    printf("%s ", word);
    count++;
} printf("%d " count);
   // return cnt;
}


