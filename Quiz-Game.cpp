#include <iostream>

using namespace std;

int main(){
	string questions[10] = {
	    "In which sea is the Devil's Triangle located?",
        "Which of the following is the most populous country?",
        "Which planet is the biggest in our solar system?",
        "Office of strategic service (OSS) was old name of which Intelligence agency?",
        "Mexico is the name of__________?",
        "Who laid first step on the Moon?",
        "Which e-sports does not appear in the seagame 32?",
        "Ogaden desert is present in__________?",
        "When was google founded?",
        "The Statue of Liberty was designed by which country?"
                            };
	string options[10][4] = {
        {"Atlantic","Pacific","Arctic","Southern"},
        {"China","India","USA","Indonesia"},
        {"Jupiter","Earth","Pluton","None"},
        {"MI6","CIA","ISI","N.O.T"},
        {"a country","a city","both","none"},
        {"LMP Edgar","CMP Stuart","Neil Armstrong","None of them"},
        {"Crossfire","PUBG Mobile","CSGO","Valorant"},
        {"Europe","Asia","Africa","America"},
        {"1997","1998","1999","2000"},
        {"America","England","France","Italy"},
                            };
	string correctAnswer[10] = {"Atlantic","India","Jupiter","CIA","both","Neil Armstrong","CSGO","Africa","1998","France"};

	int choices[10];
	int numQues = 10;
	int point = 0;

    cout << "Select answer (1-4) or 0 to skip and press enter for each question!" << endl;
    cout << endl;

	for(int i = 0; i < numQues; i++)
    {
		cout << "Question " << i+1 << endl;
		cout << questions[i] << endl;
		cout << "1." << options[i][0] << endl;
		cout << "2." << options[i][1] << endl;
		cout << "3." << options[i][2] << endl;
		cout << "4." << options[i][3] << endl;
        cout << endl;

		cin >> choices[i];

		if( choices[i] == 0 ) {
			cout << "Skipped" << endl;
		} else {
			cout << "Selected answer: " << options[i][choices[i]-1] << endl;
		}
		cout << "Correct answer : " << correctAnswer[i] << endl;

		if(correctAnswer[i] == options[i][choices[i]-1]) {
            point += 10;
            cout << "Your point is : " << point << endl;
		}
        cout << endl;

		cout << endl << "-----------------------------" << endl;
		cout << endl;
	}

	cout << endl;
	cout << "******* ******* ******* ******* " << endl;
	cout << "*******   Your Result   ******* " << endl;
	cout << "******* ******* ******* ******* " << endl;
	cout << endl;

	int correct = 0;
	int incorrect = 0;
	int skipped = 0;
	for(int i = 0; i < numQues; i++)
    {
		if(choices[i] != 0 ) {
			if(correctAnswer[i] == options[i][choices[i]-1]) {
				correct++;
			} else {
				incorrect++;
			}
		} else {
			skipped++;
		}
	}
	cout << "Total Questions : " << numQues << endl;
	cout << "Correct : "<< correct << endl;
	cout << "In-Correct : " << incorrect << endl;
	cout << "Skipped : " << skipped << endl;
	cout << "Your total point is : " << point << endl;

	if (point <= 20) cout << "HAVE YOU TRIED YOUR BEST?" << endl;
	else if (point > 20 && point <= 40) cout << "TRY HARDER NEXT TIME ;-;" << endl;
	else if (point > 40 && point <= 70) cout << "THAT'S PRETTY GOOD!" << endl;
    else if (point > 70 && point <= 90) cout << "YOU ARE SO INTELLIGENT!!" << endl;
    else cout << "YOUR KNOWLEDGE IS ON ANOTHER LEVEL!!!" << endl;

	return 0;
}

