// Wen Qian Zheng
// Homework 2 Part 2
// October 1st, 2024

#include <iostream>
using namespace std;

int main()
{
    double score, max, min, sum, final;
    int S = 1; // the judge #
    sum = 0; // setting initial sum at 0 so we can append to this later

    cout << "\nJudge " << S << " inputting score:\n> "; // prompts FIRST judge input
    cin >> score; // FIRST judge inputs the score
    
    max = score; // temporarily sets the score as max due to the lack of other scores for comparison
    min = score; // temporarily sets the score as min due to the lack of other scores for comparison
    sum = score; // temporarily sets the score as sum due to the lack of other scores for comparison

    while (S < 6) // for every judge from 2-6
    {
        S = S + 1; // every time the question is prompted, a new judge & number is assigned
        cout << "\nJudge " << S << " inputting score:\n> "; // prompts judge 'S' (judge's number) to input their score
        cin >> score; // takes the judge's input

        sum = sum + score; // appending the judge's inputted score to the sum

        if (score > max) // checks if the score is the maximum
            max = score; // if the score that the judge put in is higher than the current maximum, it replaces the score with the highest input

        if (score < min) // checks if the score is the minimum
            min = score; // if the score that the judge put in is lower than the current mminimum, it replaces the score with the lowest input
    }

    sum = sum - max - min; // getting rid of the two maximum and minimum scores from the total sum

    final = sum / 4; // takes the total of the scores and gets the average for it
    cout << "\nThe final score for the project is: " << final << endl;

    return 0; // when the program is successfully ran, end with return 0; :D
}


/* 

Judge 1 inputting score:
> 10

Judge 2 inputting score:
> 8

Judge 3 inputting score:
> 5

Judge 4 inputting score:
> 7

Judge 5 inputting score:
> 5

Judge 6 inputting score:
> 2

The final score for the project is: 6.25

*/
