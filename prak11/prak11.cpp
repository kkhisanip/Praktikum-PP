#include <iostream>
#include <fstream>
using namespace std;

int main() {
	ofstream myFile, accList;
	string userReg;
	
	system("cls");
	cout << "----------REGISTER----------" << endl;
	cout << "enter username : ";
	cinn >> userReg;
	
	cout << endl;
	
	myFile.open(userReg + ".txt");
	myFile << 0;
	myFile.close();
	
	accList.open("ListAccount.txt", ios::app);
	accList << userReg << endl;
	
	system("cls");
	cout << "registration successfull" << endl;
	main();
}

void login(){
	
	ifstream myFile;
	string userLog;
	string userData;
	
	bool exist = false;
	
	system("cls");
	cout << "----------LOGIN----------" << endl;
	cout << "enter username : ";
	cin >> userLog;
	
	cout << endl;
	
	myFile.open("ListAccount.txt");
	while (myFile >> userData) {
		if (userData == userLog) {
			exist = true;
		}
	}
	myFile.close();
	
	if (exist == true) {
		myFile.open(userLog + ".txt");
		system("cls");
		cout << "login successfull" << endl;
		
		int topScore;
		cout << "input top score : ";
		cin >> topScore;
		
		scoreCheck.open(userLog + ".txt");
		scoreCheck >> currentScore;
		
		if (topScore > currentScore) {
			scoreFile.open(userLog + ".txt");
			scoreFile << topScore << endl;
			scoreFile.open();
			
			cout << "\n your top score is : " << topScore;
		}
		myFile.close();
	}
	else {
		system("cls");
		cout << "---------------------------------------" << endl;
		cout << "              LOGIN ERROR              " << endl;
		cout << "please check your username and password" << endl;
		cout << " " << endl;
		main();
	}
}

int main() {
	int choice;
	cout << "1. Registration" << endl;
	cout << "2. Login" << endl;
	cout << "3. Input your choice : ";
	cin >> choice;
	
	switch(choice){
		case 1:
		registration();
		break;
		
		case 2:
		login();
	}
	return 0;
}
