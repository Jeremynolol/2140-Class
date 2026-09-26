/*
 * Full Name:     Jeremy Calle  
 * Student ID:    002581809
 * Course:        EECE 2140 - Computing Fundamentals for Engineers
 * Section:       Mon, Wed: 2:50pm - 4:30p
 * Semester:      Fall 2026
 * Assignment:    Homework 1 - Quiz Grade Analyzer
 * Compilation:   g++ -std=c++11 main.cpp -o main
 * Description:   Reads an unknown number of quiz scores from standard
 *                input and reports the count, sum, minimum, maximum,
 *                average, and letter grade for the quiz.
 */

#include <iostream>

int main()
{
 const double A_CUTOFF = 90;
 const double B_CUTOFF = 80;
 const double C_CUTOFF = 70;
 const double D_CUTOFF = 60;

 int score;
 int count = 0;
 int sum = 0;
 int min = 0;
 int max = 0;

 std::cout << "Enter quiz scores (Ctrl+D / Ctrl+Z to end):" << std::endl;

 while (std::cin >> score)
 {
    if (count == 0)
    {
        min = score;
        max = score;
    }
    else
    {
        if (score < min)
        {
            min = score;
        }

        if (score > max)
        {
            max = score;
        }
    }

    sum = sum + score;
    count = count + 1; 
}

if (count == 0)
{
    std::cout << "No scores were entered." << std::endl;
    return 0;
}

double average = (sum * 1.0) / count;
char letterGrade;

//down here are the boundaries for the grading system
if (average >= A_CUTOFF)
{
    letterGrade = 'A';
}
else if (average >= B_CUTOFF)
{
    letterGrade = 'B';
}
else if (average >= C_CUTOFF)
{
    letterGrade = 'C';
}
else if (average >= D_CUTOFF)
{
    letterGrade = 'D';
}
else
{ 
    letterGrade = 'F';
}

//this is where the requirement is for output
std::cout << "--- Quiz Summary ---" << std::endl;
std::cout << "Scores entered: " << count << std::endl;
std::cout << "Sum: " << sum << std::endl;
std::cout << "Minimum: " << min << std::endl;
std::cout << "Maximum: " << max << std::endl;
std::cout << "Average: " << average << std::endl;
std::cout << "Letter grade: " << letterGrade << std::endl;


    return 0;
}

