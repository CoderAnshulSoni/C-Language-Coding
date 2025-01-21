
/* Question          : count number of students scoring X marks in GQ and store it in 'sum_gq'
   int numOfStudents : Integer number containing the total number of students
   int gq[]          : Integer array containing the GQ marks of all students
   int sum_gq[]      : Integer array to be computed  */
void getTotalGQ(int numOfStudents, int gq[], int sum_gq[]) {
    // Write your solution code below this line
    int count = 0, k = 0;
    for(int i = 0;i <= 10;i++)
    {
        count = 0;
        for(int j = 0;j < numOfStudents;j++)
        {
            if(gq[j] == i)
            count++;
        }
        sum_gq[k] = count;
        k++;
    }

}



/* Question          : Count number of students scoring Y marks in GPA and store it in 'sum_gpa'
   int numOfStudents : Integer number containing the total number of students
   float gpa[]       : Array of type float containing the GPA marks of all students
   int sum_gpa[]     : Integer array to be computed */
void getTotalGPA(int numOfStudents, float gpa[], int sum_gpa[]) {
    // Write your solution code below this line
    int count0 = 0, count1 = 0, count2 = 0, count3 = 0;
    for(int i = 0;i < numOfStudents;i++)
    {
        if(gpa[i] == 0)
        {
            count0++;
            sum_gpa[0] = count0;
        }
        else if(gpa[i] == 0.3f)
        {
            count1++;
            sum_gpa[1] = count1;
        }
        else if(gpa[i] == 0.6f)
        {
            count2++;
            sum_gpa[2] = count2;
        }
        else if(gpa[i] == 1)
        {
            count3++;
            sum_gpa[3] = count3;
        }
    }
}

/* Question          : Count number of students scoring X marks in GQ, Y marks in GPA, total, and result, in 'count[][]'
   int numOfStudents : Integer number containing the total number of students
   int gq[]          : Integer array containing the GQ marks of all students
   float gpa[]       : Array of type float, containing the GPA marks of all students
   int count[][]     : Integer array to be computed */
void getTotalCount(int numOfStudents, int gq[], float gpa[], int count[][5]) {
    // Write your solution code below this line
    int k = 0, m = 0;
    for(int i = 0;i < numOfStudents;i++)
    {
        k = gq[i];
        if(gpa[i] == 0)
            count[k][0]++;
        else if(gpa[i] < 0.5)
            count[k][1]++;
        else if(gpa[i] < 1)
            count[k][2]++;
        else if(gpa[i] == 1)
            count[k][3]++;
    }
    for(int i = 0;i < 11;i++)
    {
        for(int k = 0;k < 4;k++)
            count[i][4] += count[i][k];
    }
    for(int k = 0;k < 5; k++)
    {
        for(int i = 0;i < 11;i++)
            count[11][k] += count[i][k];
    }
}

