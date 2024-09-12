void points(char str[], char ans[], int* ptr) {
    if (!strcmp(str, ans)) {
        printf("Good Job! :) \n");
        *ptr += 10;
    } else {
        printf("Try Again Later :(\n");
    }
    printf("Score: %i\n", *ptr);
}

void guess(char str[], char ans[], int* ptr) {
    int i = 0;
    char x;
    printf("Enter your guesses:\n");
    while (i < strlen(str)) {
        scanf(" %c", &x);
        if (str[i] != x) {
            printf("Try Again\n");
        } else {
            ans[i] = x;
        }
        i++;
    }
    ans[i] = '\0';
    printf("Guessed string: %s\n", ans);
    points(str, ans, ptr);
}

int user_action() {
    int i;
    printf("Continue/Exit (1/0): ");
    scanf("%i", &i); // 1 to continue, 0 to quit game
    if (i == 0) {
        printf("\nThank You For Playing The Game\n");
        return 0;
    }
    return 1;
}
