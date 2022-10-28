#ifndef CREDD
#define CREDD

#include <iostream>



class Credentials {



	char username[25] = "username"; // default , can be changed latter
	char password[25] = "password"; 


	// making these functions private for data protection
	
	void set_username(const char* i_user) { strcpy_s(username, i_user); }
	void  set_password(const char* i_pass) { strcpy_s(password, i_pass); }

	//const char* get_username() { return username; }
	//const char* get_password() { return password; }
	

public:


	bool confirm_credentials(const char* i_username , const char* pass)
	{
		return !(strcmp(username, i_username) || strcmp(password, pass));
	}

	void change_credentials()
	{
		char user[25];
		char pass[25];
		std::cout << "Enter old Username ?" << std::endl;
		std::cin >> user;
		std::cout << "Enter old Password ?" << std::endl;
		std::cin >> pass;

		if (confirm_credentials(user, pass))
		{
			std::cout << "Enter New Username : " << std::endl;
			std::cin >> user;
			std::cout << "Enter New Password: " << std::endl;
			std::cin >> pass;
			set_username(user);
			set_password(pass);

			std::cout << "Username and Password Changed ! " << endl;
		}
		else
			std::cout << "Username and Password NOT Changed ! " << endl;
	}

};




#endif

