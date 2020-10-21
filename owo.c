#include <stdio.h>
//TODO: optimise the code and clean up vars, then make it pretty, then make it work again o^(o-o)^o
//  (o)<  - "quack"
// ( < )
//~~~~~~~~
//01000101
int main()
{
  char nowo[1000];
  //original string
  printf("enter the text you want to owoify: ");
  scanf("%[^\n]", nowo);
  char owo[2000];
  //the final string
  int skip_accounting = 0;
  //account for 2 char replacements
  for(int curstr = 0; curstr <= 100; curstr++)
  {
    //this commented block will make o wo
    /*if(nowo[curstr - skip_accounting] == 79||nowo[curstr - skip_accounting] == 111)//checks if it is o or O
    {
      owo[curstr] = 119;
      curstr += 1;
      skip_accounting += 1;
      owo[curstr] = 111;
    }*/
    /*else*/if(nowo[curstr - skip_accounting] == 114/*r*/|| nowo[curstr - skip_accounting] == 82/*R*/||nowo[curstr - skip_accounting] == 76||nowo[curstr - skip_accounting] == 108)//if it sees r R or l or L
    {
      owo[curstr] = 119;/*w*/
    }
    else
    {
      owo[curstr] = nowo[curstr - skip_accounting];
    }
  }
  printf("%s \n", owo);
  scanf("%s");
  return 0;
}
//hehe 01000101
