#include <iostream>

using namespace std;

int main() {
    int x;
    cin >> x;

    string can[] = {
        "CANH", "TAN", "NHAM", "QUY", "GIAP",
        "AT", "BINH", "DINH", "MAU", "KY"
    };

    string chi[] = {
        "THAN", "DAU", "TUAT", "HOI", "TY", "SUU",
        "DAN", "MAO", "THIN", "TI", "NGO", "MUI"
    };

    cout << can[x % 10] << " " << chi[x % 12];

    return 0;
}