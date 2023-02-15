#include <iostream>
using namespace std;

int main(){
	string password;
	
	cout << "=========== Login Smart TV ============" << endl;
	cout << "Masukkan Password: ";
	cin >> password;
	
	//percabangan if
	if  (password == "tvfamily") {
		cout << "Selamat Menikmati Tayangan !" << endl;
	}
}