#include<stdio.h>

int main() {
    int score = 0;
    int ans;

    printf("===== Online Quiz System =====\n");

    printf("\n1. Which language is used for system programming?\n");
    printf("1. HTML\n2. C\n3. Python\n4. Java\n");
    printf("Enter Answer: ");
    scanf("%d", &ans);

    if(ans == 2)
        score++;

    printf("\n2. Which symbol is used for comments in C?\n");
    printf("1. //\n2. ##\n3. **\n4. %%\n");
    printf("Enter Answer: ");
    scanf("%d", &ans);

    if(ans == 1)
        score++;

    printf("\n3. Which function is used for output in C?\n");
    printf("1. scanf()\n2. cin\n3. printf()\n4. cout\n");
    printf("Enter Answer: ");
    scanf("%d", &ans);

    if(ans == 3)
        score++;

    printf("\n===== Result =====\n");
    printf("Your Score = %d/3\n", score);

    return 0;
}
