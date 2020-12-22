/*
 * Complete the timeConversion function below.
 */
string timeConversion(string s) {

    string time = s.substr(8, 9);
    s = s.substr(0, 8);
    int hour = stoi(s.substr(0, 2));

    if (time == "AM") {

        if (hour > 12) {

            string hour_s = to_string(hour - 12);
            s.replace(0, 2, hour_s);
        }
        else if (hour == 12) {
            s.replace(0, 2, "00");
        }
    }
    else {

        if (hour < 12) {

            string hour_s = to_string(hour + 12);
            s.replace(0, 2, hour_s);
        }
    }
    return s;
}