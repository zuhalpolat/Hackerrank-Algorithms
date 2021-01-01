// Complete the timeInWords function below.
string timeInWords(int h, int m) {

    string clock = "";
    vector<string> numbers = { "zero", "one", "two", "three", "four", "five",
                              "six", "seven", "eight", "nine", "ten", "eleven",
                              "twelve", "thirteen", "fourteen", "fifteen", "sixteen",
                              "seventeen", "eighteen", "nineteen", "twenty",
                              "twenty one", "twenty two", "twenty three", "twenty four",
                              "twenty five", "twenty six", "twenty seven",
                              "twenty eight", "twenty nine" };


    if (m == 0) {
        clock.append(numbers[h]);
        clock.append(" o' clock");
        return clock;
    }
    else if (m == 15) {
        clock.append("quarter past ");
        clock.append(numbers[h]);
    }
    else if (m < 30) {
        clock.append(numbers[m]);
        (m == 1) ? clock.append(" minute past ") : clock.append(" minutes past ");
        clock.append(numbers[h]);
    }
    else if (m == 30) {
        clock.append("half past ");
        clock.append(numbers[h]);
    }
    else if (m == 45) {
        clock.append("quarter to ");
        clock.append(numbers[h + 1]);
    }
    else {
        clock.append(numbers[60 - m]);
        clock.append(" minutes to ");
        clock.append(numbers[h + 1]);
    }

    return clock;
}