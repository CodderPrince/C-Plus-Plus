#include <stdio.h>
#include <string.h>

int main()
{
  char text[100];
  char reference[100];
  int match_count = 0;
  float match_percent;

  printf("Enter your text: ");
  fgets(text, 100, stdin);

  printf("Enter reference text (replace with actual reference loading): ");
  fgets(reference, 100, stdin); // Replace with reference file loading

  int text_len = strlen(text) - 1; // Exclude newline character
  int ref_len = strlen(reference) - 1;

  for (int i = 0; i < text_len; i++)
  {
    if (text[i] == reference[0])
    { // Check for first character match
      int j = 0;
      while ((text[i + j] == reference[j]) && (i + j < text_len) && (j < ref_len))
      {
        match_count++;
        j++;
      }
      if (reference[j] == '\0')
      { // Entire reference string matched
        printf("Match found at index %d (Highlight this section)\n", i);
      }
    }
  }

  match_percent = (float)match_count / text_len * 100;
  printf("Match Percentage: %.2f%%\n", match_percent);

  return 0;
}
