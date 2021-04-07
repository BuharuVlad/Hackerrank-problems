#include <iostream>
#include <vector>
#include <string>

using namespace std;

string timeConversion(string s) 
{
    string timeConv;
    if (s[s.size() - 2] == 'P') 
    {
        if (s[0] == '1' && s[1] == '2')
        {
            timeConv = s;
            timeConv.resize(s.size() - 2);
        }
        else {
            char hh[2];
            hh[0] = s[0];
            hh[1] = s[1];
            int hh1 = atoi(hh) + 12;
            string hhS = to_string(hh1);
            if (hhS[0] == '2' && hhS[1] == '4') {
                s[0] = '0';
                s[1] = '0';
                timeConv = s;
                timeConv.resize(s.size() - 2);
            }
            else {
                s[0] = hhS[0];
                s[1] = hhS[1];
                timeConv = s;
                timeConv.resize(s.size() - 2);

            }
        }

    }
    if (s[s.size() - 2] == 'A')
    {
        char hh[2];
        hh[0] = s[0];
        hh[1] = s[1];
        int hh1 = atoi(hh);
        string hhS = to_string(hh1);
        if (hhS[0] == '1' && hhS[1] == '2') {
            s[0] = '0';
            s[1] = '0';
            timeConv = s;
            timeConv.resize(s.size() - 2);
        }
        else {
            timeConv = s;
            timeConv.resize(s.size() - 2);
        }
    }
    
    return timeConv;

}
int main() {
    string s0 = "07:05:45PM";
    string s4 = "12:45:54PM";
    string s5 = "02:34:50PM";
    string s7 = "04:59:59PM";
    string s9 = "11:59:59PM";
    cout <<"s0: " << timeConversion(s0);
    cout << endl;
    string s1 = "12:45:54PM";
    cout << "s1: " << timeConversion(s1);
    cout << endl;
    string s2 = "04:59:59AM";
    cout << "s2: " << timeConversion(s2);
    cout << endl;
    cout << "s4: " << timeConversion(s4);
    cout << endl;
    cout << "s5: " << timeConversion(s5);
    cout << endl;
    cout << "s7: " << timeConversion(s7);
    cout << endl;
    cout << "s9: " << timeConversion(s9);

}


/*
string TimeConversion;
    char formatHour[3];
    int contor = 0;
    int sizeS = s.size();
    char pm[3] = { 'P', 'M' };
    char am[3] = { 'A', 'M' };
    string hhString;

    for (int i = sizeS - 2; i < s.size() + 1; i++) {
        formatHour[contor] = s[i];
        contor++;
    }
    if (strcmp(pm, formatHour) == 0 ) {
        for (int i = 0; i < 2; i++) {
            hhString = s[i];
        }
        int hh = stoi(hhString) + 12;
        hhString = to_string(hh);
    }
    if (strcmp(am, formatHour) == 0) {
        for (int i = 0; i < 2; i++) {
            hhString.append(s[i]);

        }

        cout << "hhString : " << hhString << endl;
        int hh = stoi(hhString) + 12;
        cout << "hh : " << hh<<endl;
        hhString = to_string(hh);
        cout << "hhString : " << hhString << endl;
    }
    char timeWithoutHour[8];
    for (int i = 2; i < s.size(); i++) {
        timeWithoutHour[i - 2] = s[i];
    }

    TimeConversion = hhString + timeWithoutHour;
    TimeConversion.resize(8);
    if (TimeConversion[0] == 2 && TimeConversion[1] == 4)
    {
        TimeConversion[0] = 0;
        TimeConversion[1] = 0;
    }


    return TimeConversion;
*/