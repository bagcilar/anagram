#include <stdio.h>

int main(void){
    
    int i, letterCounter[26], letterComparison[26], firstWord, secondWord;
    int comparisonChecker = 1;
    
    //initializes letterCounter's and letterComparison's values to 0
    for (i = 0; i < 26; i++){
        letterCounter[i] = 0;
        letterComparison[i] = 0;
    } 
    
    //obtains each character of first word, converts to lower case, maps into letter frequency array
    //ignores all inputs except for leters
    printf("Enter first word: ");
    while ((firstWord = getchar()) != '\n'){
        firstWord = tolower(firstWord);
        if (isalpha(firstWord)){
            letterCounter[firstWord- 97] ++;
        }
    }

    //obtains each character of second word, converts to lower case, maps into letter frequency array
    //ignores all inputs except for leters
    printf("Enter second word: ");
    while ((secondWord = getchar()) != '\n'){
        secondWord = tolower(secondWord);
        if (isalpha(secondWord)){
            letterComparison[secondWord- 97] ++;
        }
    }

    //iterates through letterCounter and letterComparison, comparing each value
    //if a value disagrees, changes comparisonChecker to 0, which is a boolean control
    for (i = 0; i < 26; i++){
        if (letterCounter[i] != letterComparison[i]){
            comparisonChecker = 0;
        }
    }
    
    //if the letter frequency mappings are the same, prints message stating the two words are anagrams
    if (comparisonChecker == 0){
        printf("The words are not anagrams. \n");
    }else{
        printf("The words are anagrams. \n");
    }
    
    return 0;    

    
}
