//c code to get the current username using GetUserNameA

#include <wtypes.h>
#include <Windows.h>
#include <stdio.h>

int main(){

	//Declare variables
	char username[256];
	DWORD username_len = 256;

	//Call GetUserNameA
	BOOL result = GetUserNameA(username, &username_len);

	//Check Result

	if (result) {
		printf("Current User Name: %s\n", username);
	}
	else {
		DWORD error_code = GetLastError();
		printf("Error retrieving username: %d\n", error_code);

	}

	return 0;

}
