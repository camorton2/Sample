#include <cstdio>

int callMe(int a)
{
   return a+=45;
}

int main(void)
{
   return callMe(10);
}
