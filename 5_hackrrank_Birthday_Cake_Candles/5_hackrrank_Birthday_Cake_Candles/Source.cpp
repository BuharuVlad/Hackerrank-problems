#include <iostream>
#include <vector>	

using namespace std;

int birthdayCakeCandles(vector<int> candles) {
    int maxValue = 0;
    int contor = 0;
    for (int i = 0; i < candles.size(); i++) {
        if (maxValue < candles[i]) {
            maxValue = candles[i];
        }
    }
    for (int i = 0; i < candles.size(); i++) {
        if (maxValue == candles[i])
        {
            contor++;
        }
    }
    return contor;
}


int main() {
    vector<int> candles = { 18, 90, 90, 13, 90, 75, 90, 8, 90,43 };

    cout << birthdayCakeCandles(candles);
	return 0;
}