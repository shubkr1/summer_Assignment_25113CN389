#include <stdio.h>
#include <ctype.h>

// Define a structure to bundle quiz question data together
typedef struct {
    char question[150];
    char options[4][50];
    char correctAnswer; // Stored as 'A', 'B', 'C', or 'D'
} QuizQuestion;

int main() {
    // Initialize an array of 3 questions
    QuizQuestion quiz[3] = {
        {
            "Which programming language is known as the mother of all languages?",
            {"A. Java", "B. Python", "C. C", "D. Assembly"},
            'C'
        },
        {
            "What is the size of an 'int' data type in standard 32-bit C?",
            {"A. 2 Bytes", "B. 4 Bytes", "C. 8 Bytes", "D. 1 Byte"},
            'B'
        },
        {
            "Which of the following is not a valid loop in C?",
            {"A. for", "B. while", "C. do-while", "D. repeat-until"},
            'D'
        }
    };

    int totalQuestions = 3;
    int score = 0;
    char userAnswer;

    printf("==================================================\n");
    printf("         WELCOME TO THE COMPUTER SCIENCE QUIZ      \n");
    printf("==================================================\n\n");

    // Loop through each question
    for (int i = 0; i < totalQuestions; i++) {
        printf("Question %d: %s\n", i + 1, quiz[i].question);
        
        // Print the 4 multiple choice options
        for (int j = 0; j < 4; j++) {
            printf("%s\n", quiz[i].options[j]);
        }

        // Input and validation loop
        while (1) {
            printf("Your Answer (A/B/C/D): ");
            scanf(" %c", &userAnswer); // Note the space before %c to ignore leading whitespaces
            userAnswer = toupper(userAnswer); // Convert to uppercase for consistency

            if (userAnswer >= 'A' && userAnswer <= 'D') {
                break; // Valid input, break validation loop
            }
            printf("❌ Invalid choice! Please select options only from A, B, C, or D.\n");
        }

        // Check if the answer is correct
        if (userAnswer == quiz[i].correctAnswer) {
            printf("✅ Correct!\n\n");
            score++;
        } else {
            printf("❌ Wrong! The correct answer was %c.\n\n", quiz[i].correctAnswer);
        }
    }

    // Display Final Results
    printf("==================================================\n");
    printf("                  QUIZ OVER!                      \n");
    printf("==================================================\n");
    printf("Your Final Score: %d out of %d\n", score, totalQuestions);
    
    // Performance Feedback calculation
    double percentage = ((double)score / totalQuestions) * 100;
    printf("Percentage: %.1f%%\n", percentage);
    
    if (percentage == 100.0) {
        printf("Feedback: Perfect score! Excellent job! 🏆\n");
    } else if (percentage >= 50.0) {
        printf("Feedback: Well done! Passed successfully. 👍\n");
    } else {
        printf("Feedback: Better luck next time! Keep learning. 📚\n");
    }
    printf("==================================================\n");

    return 0;
}