/*
 * Complete the 'gradingStudents' function below.
 *
 * The function is expected to return an INTEGER_ARRAY.
 * The function accepts INTEGER_ARRAY grades as parameter.
 */

vector<int> gradingStudents(vector<int> grades) {

    for (int i = 0; i < grades.size(); i++) {

        if (grades[i] > 37) {

            if (grades[i] % 5 == 3) {
                grades[i] += 2;
            }
            else if (grades[i] % 5 == 4) {
                grades[i]++;
            }
        }
    }
    return grades;
}
