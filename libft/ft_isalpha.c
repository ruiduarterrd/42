#include <stdio.h>

int ft_isalpha(int c) {
  if ((c >= 'a' && c <= 'z' ) || (c >= 'A' && c <= 'Z'))
    return c;
  return 0;
}

int main(int ac, char **av)
{
  if (ac != 2)
    return (printf("syntax: ./a.out <aug>"));
  printf("%d\n", ft_isalpha(av[1][0]));
  return 0;
}
