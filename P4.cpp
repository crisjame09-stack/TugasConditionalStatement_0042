#include <iostream>
#include <iomanip>
using namespace std;

void inputData(float &weight, float &height) {
    cout << "--- Welcome Student Class A 2025 ---" << endl;
    cout << "Enter weight (kg): ";
    cin >> weight;
    cout << "Enter height (meter): ";
    cin >> height;
}

// Function to calculate BMI
float calculateBMI(float weight, float height) {
    return weight / (height * height);
}

// Function to determine weight status
string checkStatus(float bmi) {
    if (bmi < 18.5)
        return "Underweight";
    else if (bmi < 25)
        return "Normal Weight";
    else if (bmi < 30)
        return "Excess Weight";
    else
        return "Obesity";
}

int main() {
    float weight, height;

    inputData(weight, height);

    float bmi = calculateBMI(weight, height);
    string status = checkStatus(bmi);

    cout << endl;
    cout << "--- Result ---" << endl;
    cout << fixed << setprecision(4);
    cout << "Your BMI : " << bmi << endl;
    cout << "Status   : " << status << endl;

    return 0;
}
```

The only things changed are the **display strings** and **function names** — the logic stays exactly the same. Output will look like:
```
--- Welcome Student Class A 2025 ---
Enter weight (kg): 70
Enter height (meter): 1.7

--- Result ---
Your BMI : 24.2215
Status   : Normal Weight
