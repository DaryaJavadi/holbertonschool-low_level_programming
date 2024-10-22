#ifndef MAIN_H
#define MAIN_H
int _putchar(char c);
void print_alphabet(void);
void print_alphabet_x10(void);
int _islower(int c);
int _isalpha(int c);
int main(void)
{
  int r;

  r = _isalpha('H');
  _putchar(r + '0');
  r = _isalpha('o');
  _putchar(r + '0');
  r = _isalpha(108);
  _putchar(r + '0');
  r = _isalpha(';');
  _putchar(r + '0');
  _putchar('\n');
  return (0);
}
#endif /* MAIN_H */
