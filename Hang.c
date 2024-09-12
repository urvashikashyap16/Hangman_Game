int main() {
    printf("*-------------------------------------------*\n");
    printf("*          WELCOME TO HANGMAN!              *\n");
    printf("*-------------------------------------------*\n");
    printf("*                  MENU                     *\n");
    printf("*-------------------------------------------*\n");
    printf("*           <1>Start <0>Quit                *\n");
    printf("*-------------------------------------------*\n");
    int score = 0, *ptr;
    ptr = &score;
    int input;
    scanf("%i", &input);
    if (input) {
        top:
        printf("Levels:\n<1>Easy <2>Medium <3>Hard\n");
        int level;
        printf("Choose your level: ");
        scanf("%i", &level);
        if (level == 1) {
            printf("ROUND 1\n");
            printf("Household Item: _ _ _\n");
            char str[] = "FAN", ans[50] = {0};
            guess(str, ans, ptr);
            if (!user_action()) return 0;

            printf("\nROUND 2\n");
            printf("Fish: _ _ _ _ _\n");
            char str1[] = "SHARK", ans1[50] = {0};
            guess(str1, ans1, ptr);
            if (!user_action()) return 0;

            printf("\nROUND 3\n");
            printf("Movie: _ _ _ _ _ _ _\n");
            char str2[] = "TITANIC", ans2[50] = {0};
            guess(str2, ans2, ptr);
            if (!user_action()) return 0;

            printf("\nROUND 4\n");
            printf("Verb: _ _ _ _ _ _ _\n");
            char str3[] = "EXPLORE", ans3[50] = {0};
            guess(str3, ans3, ptr);
            if (!user_action()) return 0;

            printf("\nROUND 5\n");
            printf("Nature: _ _ _ _ _ _ _\n");
            char str4[] = "TORNADO", ans4[50] = {0};
            guess(str4, ans4, ptr);
            if (!user_action()) return 0;
        }
        if (level == 2) {
            printf("ROUND 1\n");
            printf("Professions: _ _ _ _ _ _ _ _ _\n");
            char str[] = "ECOLOGIST", ans[50] = {0};
            guess(str, ans, ptr);
            if (!user_action()) return 0;

            printf("\nROUND 2\n");
            printf("Sports Event: _ _ _ _ _ _ _ _\n");
            char str1[] = "OLYMPICS", ans1[50] = {0};
            guess(str1, ans1, ptr);
            if (!user_action()) return 0;

            printf("\nROUND 3\n");
            printf("Transportation: _ _ _ _ _ _\n");
            char str2[] = "SUBWAY", ans2[50] = {0};
            guess(str2, ans2, ptr);
            if (!user_action()) return 0;

            printf("\nROUND 4\n");
            printf("Animal: _ _ _ _ _ _ _ _ _ _\n");
            char str3[] = "TIMBERWOLF", ans3[50] = {0};
            guess(str3, ans3, ptr);
            if (!user_action()) return 0;

            printf("\nROUND 5\n");
            printf("Fruit: _ _ _ _ _ _ _ _ _ _\n");
            char str4[] = "STRAWBERRY", ans4[50] = {0};
            guess(str4, ans4, ptr);
            if (!user_action()) return 0;
        }
        if (level == 3) {
            printf("ROUND 1\n");
            printf("Profession: _ _ _ _ _ _ _\n");
            char str[] = "AUDITOR", ans[50] = {0};
            guess(str, ans, ptr);
            if (!user_action()) return 0;

            printf("\nROUND 2\n");
            printf("Outerspace: _ _ _ _ _ _ _ _ _ _\n");
            char str1[] = "SPACECRAFT", ans1[50] = {0};
            guess(str1, ans1, ptr);
            if (!user_action()) return 0;

            printf("\nROUND 3\n");
            printf("Places: _ _ _ _ _ _ _ _ _\n");
            char str2[] = "MTEVEREST", ans2[50] = {0};
            guess(str2, ans2, ptr);
            if (!user_action()) return 0;

            printf("\nROUND 4\n");
            printf("Nature: _ _ _ _ _ _ _ _\n");
            char str3[] = "SNOWFALL", ans3[50] = {0};
            guess(str3, ans3, ptr);
            if (!user_action()) return 0;

            printf("\nROUND 5\n");
            printf("Everyday Object: _ _ _ _ _ _ _ _ _ _ _ _\n");
            char str4[] = "CLOTHESDRYER", ans4[50] = {0};
            guess(str4, ans4, ptr);
            if (!user_action()) return 0;
        }
        int a;
        printf("PLAY AGAIN / EXIT (1/0): ");
        scanf("%i", &a);
        if (a) goto top;
    }
    printf("\nThank You For Playing The Game\n");
    return 0;
}
