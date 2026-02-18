#include <stdio.h>
#include <string.h>
#include <ctype.h>

unsigned int score_password(const char *password) {
  unsigned int lower = 0, upper = 0, digit = 0, special = 0;
  unsigned int score = 0;
  unsigned int length = strlen(password);

  if (length > 8) score++;
  if (length > 12) score += 2;
  if (length > 16) score += 4;

  for (int i = 0; i < length; i++) {
    if (islower(password[i]) && !lower) {
      lower = 1;
      upper = 0;
      digit = 0;
      special = 0;
      score++;
    } else if (isupper(password[i]) && !upper)  {
      lower = 0;
      upper = 1;
      digit = 0;
      special = 0;
      score++;
    } else if (isdigit(password[i]) && !digit) {
      lower = 0;
      upper = 0;
      digit = 1;
      special = 0;
      score++;
    } else if (ispunct(password[i]) && !special) {
      lower = 0;
      upper = 0;
      digit = 0;
      special = 1;
      score++;
    }
  }
  return score;
}

void rate_password(const unsigned int score) {
  if (score > 15) {
    printf("Strength Rating: Strong\n");
  } else if (score > 8) {
    printf("Strength Rating: Medium\n");
    printf("Increase strength by using a more random password!\n");
  } else {
    printf("Strength Rating: Weak\n");
    printf("Increase strength by using a much more random password!\n");
  }
}

int main () {
  char password[128];

  printf("Enter a password: ");
  fgets(password, sizeof(password), stdin);
  printf("\n");

  unsigned int strength_value = score_password(password);
  printf("Strength Value: %d\n", strength_value);
  rate_password(strength_value);
  return 0;
}