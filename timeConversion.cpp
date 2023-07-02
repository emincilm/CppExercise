#include <bits/stdc++.h>

using namespace std;


string timeConversion(string s) {
    string convertedTime;
    int hour = stoi(s.substr(0, 2));
    int minute = stoi(s.substr(3, 2));
    int second = stoi(s.substr(6, 2));
    string meridiem = s.substr(8, 2);

    if (meridiem == "AM") {
         if (hour == 12) {
            hour = 0;
        }
    } else {
        if (hour != 12) {
            hour += 12;
        }
    }
    stringstream ss;
    ss << setw(2) << setfill('0') << hour;
    ss << ":";
    ss << setw(2) << setfill('0') << minute;
    ss << ":";
    ss << setw(2) << setfill('0') << second;

    convertedTime = ss.str();

    return convertedTime;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = timeConversion(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
