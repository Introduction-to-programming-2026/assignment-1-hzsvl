#include <stdio.h>

int main(void) {
    const double QUIZ_WEIGHT = 0.40;
    const double EXAM_WEIGHT = 0.60;
    const int PASS_SCORE = 50;
    const int MIN_SCORE = 0;
    const int MAX_SCORE = 100;

    double quiz = 0.0;
    double exam = 0.0;
    double finalScore = 0.0;

    printf("Enter quiz score (0-100): ");
    scanf("%lf", &quiz);

    printf("Enter exam score (0-100): ");
    scanf("%lf", &exam);

    if (quiz < MIN_SCORE || quiz > MAX_SCORE || exam < MIN_SCORE || exam > MAX_SCORE) {
        printf("Invalid input. Scores must be between 0 and 100.\n");
        return 1;
    }

    finalScore = quiz * QUIZ_WEIGHT + exam * EXAM_WEIGHT;

    printf("\nFinal score: %.2f\n", finalScore);

    if (finalScore >= PASS_SCORE) {
        printf("PASS\n");
    } else {
        printf("FAIL\n");
    }

    if (finalScore >= 90) {
        printf("Excellent\n");
    } else if (finalScore < 50) {
        printf("Needs improvement\n");
    }

    return 0;
}