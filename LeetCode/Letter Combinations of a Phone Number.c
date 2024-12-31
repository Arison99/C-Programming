#include <stdio.h>
#include <stdlib.h>
#include <string.h>

const char* digitToLetters[] = {
    "",     // 0
    "",     // 1
    "abc",  // 2
    "def",  // 3
    "ghi",  // 4
    "jkl",  // 5
    "mno",  // 6
    "pqrs", // 7
    "tuv",  // 8
    "wxyz"  // 9
};

void backtrack(char** result, int* returnSize, char* combination, const char* digits, int index) {
    if (index == strlen(digits)) {
        result[*returnSize] = strdup(combination);
        (*returnSize)++;
        return;
    }
    
    int digit = digits[index] - '0';
    const char* letters = digitToLetters[digit];
    
    for (int i = 0; i < strlen(letters); i++) {
        combination[index] = letters[i];
        backtrack(result, returnSize, combination, digits, index + 1);
    }
}

char** letterCombinations(char* digits, int* returnSize) {
    *returnSize = 0;
    if (digits == NULL || strlen(digits) == 0) {
        return NULL;
    }
    
    int maxCombinations = 1;
    for (int i = 0; i < strlen(digits); i++) {
        int digit = digits[i] - '0';
        maxCombinations *= strlen(digitToLetters[digit]);
    }
    
    char** result = (char**)malloc(maxCombinations * sizeof(char*));
    char* combination = (char*)malloc((strlen(digits) + 1) * sizeof(char));
    combination[strlen(digits)] = '\0';
    
    backtrack(result, returnSize, combination, digits, 0);
    
    free(combination);
    return result;
}