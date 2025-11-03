/*
 * This is a simple German Modal Verb Quiz.
 * The program picks a random sentence with a blank.
 * The user has to choose the correct modal verb from 3 options.
 * The program will tell the user if their choice is correct or not.
 */

// We need these "include" lines to use functions for:
// stdio.h  - Standard Input/Output (like printf and scanf)
// stdlib.h - Standard Library (for rand and srand)
// time.h   - Time functions (for seeding the random number)
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// The main function is where every C program starts
int main() {

    // --- 1. Declare Variables ---
    // We declare all the variables we will need at the top.

    int userChoice;         // The number the user types in (1, 2, or 3)
    int score = 0;          // To count how many correct answers the user has
    int questionIndex;      // The index number of the question we pick
    
    // We can use a number as a "flag" to track if the game is running.
    // 1 will mean true (the game is running)
    // 0 will mean false (the user wants to quit)
    int gameIsRunning = 1;

    // --- 2. Define the Questions ---
    
    // We use an array of strings (char*) to hold the sentences.
    // The \n at the start makes the formatting look nice.
    char* sentences[] = {
        "\nIch ___ Deutsch lernen.\n  (1. will, 2. ist, 3. habe)",
        "\nEr ___ nicht schwimmen.\n  (1. seid, 2. kann, 3. mache)",
        "\nWir ___ heute ins Kino gehen.\n  (1. wollen, 2. bist, 3. geht)",
        "\n___ du mir helfen?\n  (1. Hat, 2. Geht, 3. Kannst)",
        "\nIhr ___ hier nicht rauchen!\n  (1. dürft, 2. habt, 3. macht)",
        "\nMan ___ immer höflich sein.\n  (1. soll, 2. ist, 3. hat)",
        "\nIch ___ das nicht essen.\n  (1. bin, 2. mag, 3. gehe)",
        "\nWas ___ du trinken?\n  (1. seid, 2. hast, 3. möchtest)",
        "\nSie (plural) ___ ihre Hausaufgaben machen.\n  (1. müssen, 2. sind, 3. haben)",
        "\nPeter ___ Auto fahren.\n  (1. ist, 2. darf, 3. macht)"
    };
    
    // This array holds the correct answer number for each sentence.
    // So, solutions[0] (which is 1) is the answer for sentences[0].
    // solutions[1] (which is 2) is the answer for sentences[1].
    // ...and so on.
    int solutions[] = {
        1,  // will
        2,  // kann
        1,  // wollen
        3,  // Kannst
        1,  // dürft
        1,  // soll
        2,  // mag
        3,  // möchtest
        1,  // müssen
        2   // darf
    };

    // We calculate the number of questions by the size of the array.
    int num_questions = sizeof(sentences) / sizeof(sentences[0]);

    // --- 3. Seed the Random Number Generator ---
    
    // "Seed" the random number generator.
    // This makes sure we get a different "random" question
    // every time we run the program.
    // Using time(0) seeds it with the current second.
    srand(time(0));

    // --- 4. Start the Game ---
    
    printf("Welcome to the German Modal Verb Quiz!\n");
    printf("I will show you a sentence with a blank.\n");
    printf("You just type the number (1, 2, or 3) for the correct answer.\n");

    // --- 5. The Main Game Loop ---
    
    // We use a "while" loop to keep asking the user questions.
    // The loop will continue as long as the gameIsRunning flag is 1 (true).
    while (gameIsRunning == 1) {
        
        // --- 5a. Pick a Random Question ---
        
        // Get a random number.
        // rand() % num_questions gives a number between 0 and (num_questions - 1).
        questionIndex = rand() % num_questions;

        // --- 5b. Show Question and Get Input ---
        
        // Print the sentence that matches the random index number
        printf("%s\n", sentences[questionIndex]);
        
        printf("Enter your choice (1, 2, or 3): ");
        
        // Get the user's input and store it in the userChoice variable.
        // The "&" is important, it tells scanf WHERE to put the number.
        scanf("%d", &userChoice);
        
        // This 'while' loop clears any extra characters the user typed.
        // It reads characters until it finds the 'Enter' key ('\n').
        while (getchar() != '\n');

        // --- 5c. Check the Answer ---
        
        // Check if the user's choice matches the solution
        if (userChoice == solutions[questionIndex]) {
            printf("Richtig! (Correct!)\n");
            // Add 1 to the score
            score = score + 1;
        } 
        // If the guess is wrong
        else {
            printf("Falsch! (Wrong!)\n");
            printf("The correct answer was number %d.\n", solutions[questionIndex]);
        }
        
        printf("Your score: %d\n", score);
        
        // --- 5d. Ask to Play Again ---
        
        printf("\nDo you want to continue?\n");
        printf("Enter 1 for Yes, or 0 for No: ");
        scanf("%d", &gameIsRunning);
        
        // Clear the input buffer again
        while (getchar() != '\n');
        
    } // The loop ends here if the user enters 0

    // --- 6. End of Game ---
    
    // This code runs after the loop has finished.
    printf("\n----------------------------------------\n");
    printf("Thanks for playing!\n");
    printf("Your final score was: %d\n", score);
    printf("Auf Wiedersehen!\n");

    // Tell the operating system that the program finished successfully
    return 0; 
}
/*
 * This is a simple German Modal Verb Quiz.
 * The program picks a random sentence with a blank.
 * The user has to choose the correct modal verb from 3 options.
 * The program will tell the user if their choice is correct or not.
 */

// We need these "include" lines to use functions for:
// stdio.h  - Standard Input/Output (like printf and scanf)
// stdlib.h - Standard Library (for rand and srand)
// time.h   - Time functions (for seeding the random number)
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// The main function is where every C program starts
int main() {

    // --- 1. Declare Variables ---
    // We declare all the variables we will need at the top.

    int userChoice;         // The number the user types in (1, 2, or 3)
    int score = 0;          // To count how many correct answers the user has
    int questionIndex;      // The index number of the question we pick
    
    // We can use a number as a "flag" to track if the game is running.
    // 1 will mean true (the game is running)
    // 0 will mean false (the user wants to quit)
    int gameIsRunning = 1;

    // --- 2. Define the Questions ---
    
    // We use an array of strings (char*) to hold the sentences.
    // The \n at the start makes the formatting look nice.
    char* sentences[] = {
        "\nIch ___ gut Deutsch sprechen.\n  (1. kann, 2. bin, 3. gehe)",
        "\nWir ___ heute Abend ins Kino gehen.\n  (1. haben, 2. wollen, 3. sind)",
        "\nDu ___ deine Hausaufgaben machen.\n  (1. musst, 2. hast, 3. machst)",
        "\nEr ___ nicht schwimmen.\n  (1. ist, 2. geht, 3. kann)",
        "\nIhr ___ hier nicht rauchen.\n  (1. dürft, 2. seid, 3. könnt)",
        "\nMan ___ im Unterricht leise sein.\n  (1. will, 2. soll, 3. ist)",
        "\n___ ich bitte das Fenster öffnen?\n  (1. Bin, 2. Darf, 3. Muss)",
        "\nSie (formal) ___ einen Kaffee trinken.\n  (1. möchten, 2. haben, 3. können)",
        "\nWir ___ am Samstag früh aufstehen.\n  (1. wollen, 2. gehen, 3. müssen)",
        "\nIch ___ dieses Buch nicht lesen.\n  (1. mag, 2. bin, 3. muss)",
        "\nWas ___ ihr am Wochenende machen?\n  (1. habt, 2. wollt, 3. könnt)",
        "\nKinder ___ nicht mit Feuer spielen.\n  (1. sind, 2. haben, 3. sollen)",
        "\n___ du mir bitte helfen?\n  (1. Kannst, 2. Bist, 3. Musst)",
        "\nPeter ___ kein Fleisch essen.\n  (1. ist, 2. mag, 3. kann)",
        "\nSie (plural) ___ heute länger arbeiten.\n  (1. müssen, 2. sollen, 3. sind)"
    };
    
    // This array holds the correct answer number for each sentence.
    // So, solutions[0] (which is 1) is the answer for sentences[0].
    // solutions[1] (which is 2) is the answer for sentences[1].
    // ...and so on.
    int solutions[] = {
        1,  // kann
        2,  // wollen
        1,  // musst
        3,  // kann
        1,  // dürft
        2,  // soll
        2,  // Darf
        1,  // möchten
        3,  // müssen
        1,  // mag
        2,  // wollt
        3,  // sollen
        1,  // Kannst
        2,  // mag
        1   // müssen
    };

    // We calculate the number of questions by the size of the array.
    int num_questions = sizeof(sentences) / sizeof(sentences[0]);

    // --- 3. Seed the Random Number Generator ---
    
    // "Seed" the random number generator.
    // This makes sure we get a different "random" question
    // every time we run the program.
    // Using time(0) seeds it with the current second.
    srand(time(0));

    // --- 4. Start the Game ---
    
    printf("Welcome to the German Modal Verb Quiz!\n");
    printf("I will show you a sentence with a blank.\n");
    printf("You just type the number (1, 2, or 3) for the correct answer.\n");

    // --- 5. The Main Game Loop ---
    
    // We use a "while" loop to keep asking the user questions.
    // The loop will continue as long as the gameIsRunning flag is 1 (true).
    while (gameIsRunning == 1) {
        
        // --- 5a. Pick a Random Question ---
        
        // Get a random number.
        // rand() % num_questions gives a number between 0 and (num_questions - 1).
        questionIndex = rand() % num_questions;

        // --- 5b. Show Question and Get Input ---
        
        // Print the sentence that matches the random index number
        printf("%s\n", sentences[questionIndex]);
        
        printf("Enter your choice (1, 2, or 3): ");
        
        // Get the user's input and store it in the userChoice variable.
        // The "&" is important, it tells scanf WHERE to put the number.
        scanf("%d", &userChoice);
        
        // This 'while' loop clears any extra characters the user typed.
        // It reads characters until it finds the 'Enter' key ('\n').
        while (getchar() != '\n');

        // --- 5c. Check the Answer ---
        
        // Check if the user's choice matches the solution
        if (userChoice == solutions[questionIndex]) {
            printf("Richtig! (Correct!)\n");
            // Add 1 to the score
            score = score + 1;
        } 
        // If the guess is wrong
        else {
            printf("Falsch! (Wrong!)\n");
            // We find the correct answer from the solutions array
            int correct_answer = solutions[questionIndex];
            printf("The correct answer was number %d.\n", correct_answer);
        }
        
        printf("Your score: %d\n", score);
        
        // --- 5d. Ask to Play Again ---
        
        printf("\nDo you want to continue?\n");
        printf("Enter 1 for Yes, or 0 for No: ");
        scanf("%d", &gameIsRunning);
        
        // Clear the input buffer again
        while (getchar() != '\n');
        
    } // The loop ends here if the user enters 0

    // --- 6. End of Game ---
    
    // This code runs after the loop has finished.
    printf("\n----------------------------------------\n");
    printf("Thanks for playing!\n");
    printf("Your final score was: %d\n", score);
    printf("Auf Wiedersehen!\n");

    // Tell the operating system that the program finished successfully
    return 0; 
}
