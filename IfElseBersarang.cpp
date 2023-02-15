#include <iostream>
using namespace std;

int main(){
	string username, password;
	
	cout<< "----------------------------------------" << endl;
	cout<< "============ Login Smart TV ============" << endl;
	cout<< "----------------------------------------" << endl;
	cout<< "======= welcome =======" << endl;
	cout<< "Username: ";
	cin >> username;
	
	// Percabangan if else bersarang (nested)
		if (username == "hotstar"){
			cout << "Password: ";
			cin >> password;
			if (password == "tvfamily") {
				cout << "Selamat Menikmati Tayangan, Anda Berhasil Login" <<endl;
		} else {
			cout << "Maaf Password salah, silahkan coba lagi!" << endl;
		} 
	} else {
		    cout << "Maaf Username Anda Tidak Terdaftar" << endl;
		}
}