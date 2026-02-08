#include<iostream>
using namespace std;

int main()
{
    cout<<"---There are 5 students and 10 quizes---\n";
    
    // Declare 2D array: 5 rows (students) × 10 columns (quizzes)
    int marks[5][10] = {0};
    
    // INPUT: Take marks for all students and quizzes
    for(int i=0; i<5; i++)           // Loop through each student
    {
        for(int j=0; j<10; j++)      // Loop through each quiz
        {
            cout<<"Enter marks for student "<<i+1<<" of quiz "<<j+1<<": ";
            cin>>marks[i][j];        // Store marks at position [student][quiz]
        }
    }
    
    // CALCULATE TOTAL: Sum all quiz marks for each student
    int total[5] = {0};              // Array to store total marks of each student
    for(int i=0; i<5; i++)           // For each student
    {
        for(int j=0; j<10; j++)      // Add all 10 quiz marks
        {
            total[i] += marks[i][j]; // Accumulate total
        }
        cout<<"Total of student "<<i+1<<" = "<<total[i]<<endl;
    }
    
    // FIND BEST STUDENT: Student with highest total marks
    int best = 0;                    // Assume student 0 is best initially
    for(int i=1; i<5; i++)           // Compare with remaining students (1 to 4)
    {
        if(total[i] > total[best])   // If current student has more marks
        {
            best = i;                // Update best student index
        }
    }
    
    // FIND WORST STUDENT: Student with lowest total marks
    int worst = 0;                   // Assume student 0 is worst initially
    for(int i=1; i<5; i++)           // Compare with remaining students
    {
        if(total[i] < total[worst])  // If current student has less marks
        {
            worst = i;               // Update worst student index
        }
    }
    
    // OUTPUT RESULTS
    cout<<"\nBest student = Student "<<best+1<<" (Total: "<<total[best]<<")"<<endl;
    cout<<"Worst student = Student "<<worst+1<<" (Total: "<<total[worst]<<")"<<endl;
    
    return 0;
}