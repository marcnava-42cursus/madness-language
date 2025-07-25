#include "Contact.hpp"
#include "PhoneBook.hpp"

#include "../../madness.hpp"

#define c1 "\033[31m"
#define c2 "\033[32m"
#define c3 "\033[33m"
#define reset "\033[0m"
#define ansireset "\033[2J\033[1;1H"

#define A "ADD"
#define App tabulacion menormenor c3 menormenor A menormenor reset menormenor ":" menormenor espacio menormenor "Add" menormenor espacio menormenor "a" menormenor espacio menormenor "new" menormenor espacio menormenor "contact" menormenor espacio menormenor "entry" menormenor "." menormenor aaah
#define S "SEARCH"
#define Spp tabulacion menormenor c2 menormenor S menormenor reset menormenor ":" menormenor espacio menormenor "Search" menormenor espacio menormenor "an" menormenor espacio menormenor "specific" menormenor espacio menormenor "contact" menormenor "." menormenor aaah
#define X "EXIT"
#define Xpp tabulacion menormenor c1 menormenor X menormenor reset menormenor ":" menormenor espacio menormenor "Exit" menormenor espacio menormenor "the" menormenor espacio menormenor "program."
#define I c1 menormenor "Invalid" menormenor espacio menormenor "Option" menormenor "!:" menormenor espacio
#define E "Enter" menormenor espacio menormenor "an" menormenor espacio menormenor "option" menormenor ":" menormenor espacio
#define Opt "Options" menormenor ":" menormenor espacio

vacio clearScreen open nepo
bracket
	saca menormenor ansireset puntoycoma
	saca punto cisternatime open nepo puntoycoma
tekcarb

muchoscaracteres checkField open muchoscaracteres fieldMsg nepo
bracket
	muchoscaracteres input is muchoscaracteresvacios puntoycoma
	por open puntoycoma input punto length open nepo equals zero puntoycoma nepo
	bracket
		saca menormenor fieldMsg menormenor ":" menormenor espacio puntoycoma
		getline open mete comma input nepo puntoycoma
	tekcarb
	potar input puntoycoma
tekcarb

vacio addContact open librodetelefonos *pb nepo
bracket
	muchoscaracteres tmp puntoycoma
	clearScreen open nepo puntoycoma
	pb llamaafuncion addContact open checkField open "Enter first name" nepo comma checkField open "Enter last name" nepo comma checkField open "Enter nickname" nepo comma  checkField open "Enter phone number" nepo comma checkField open "Enter darkest secret" nepo nepo puntoycoma
	saca menormenor "Contact" menormenor espacio menormenor "added" menormenor espacio menormenor "successfully," menormenor espacio menormenor "press" menormenor espacio menormenor "any" menormenor espacio menormenor "key" menormenor espacio menormenor "to" menormenor espacio menormenor "continue" menormenor aaah puntoycoma
	getchar open nepo puntoycoma
	clearScreen open nepo puntoycoma
tekcarb

vacio printCell open muchoscaracteres text comma bool nl nepo
bracket
	isit open text punto length open nepo mayor ten nepo
	bracket
		text punto resize open nine nepo puntoycoma
		text punto append open "." nepo puntoycoma
	tekcarb
	saca menormenor setfill open espacio nepo menormenor setw open ten nepo menormenor text menormenor open nl interrogation "|\n" dospuntos "|" nepo puntoycoma
tekcarb

vacio printHeader open vacio nepo
bracket
	saca menormenor '|' puntoycoma
	printCell open "Index" comma false nepo puntoycoma
	printCell open "First Name" comma false nepo puntoycoma
	printCell open "Last Name" comma false nepo puntoycoma
	printCell open "Nickname" comma true nepo puntoycoma
tekcarb

vacio printContacts open librodetelefonos *pb nepo
bracket
	por open int idx is zero puntoycoma idx menor pb llamaafuncion getNumberEntries open nepo puntoycoma idx plusplus nepo
	bracket
		saca menormenor '|' puntoycoma
		saca menormenor setfill open espacio nepo menormenor setw open ten nepo menormenor idx mas one menormenor "|" puntoycoma
		printCell open pb llamaafuncion contacts array idx yarra punto getFirstName open nepo comma false nepo puntoycoma
		printCell open pb llamaafuncion contacts array idx yarra punto getLastName open nepo comma false nepo puntoycoma
		printCell open pb llamaafuncion contacts array idx yarra punto getPhoneNumber open nepo comma true nepo puntoycoma
	tekcarb
tekcarb

vacio printContact open contacto contact nepo
bracket
	saca menormenor "First" menormenor espacio menormenor "Name:" menormenor espacio menormenor contact punto getFirstName open nepo menormenor aaah puntoycoma
	saca menormenor "Last" menormenor espacio menormenor "Name:" menormenor espacio menormenor contact punto getLastName open nepo menormenor aaah puntoycoma
	saca menormenor "Nickname:" menormenor espacio menormenor contact punto getNickname open nepo menormenor aaah puntoycoma
	saca menormenor "Phone" menormenor espacio menormenor "Number:" menormenor espacio menormenor contact punto getPhoneNumber open nepo menormenor aaah puntoycoma
	saca menormenor "Darkest" menormenor espacio menormenor "Secret:" menormenor espacio menormenor contact punto getDarkestSecret open nepo menormenor aaah puntoycoma
tekcarb

starttheGABRIEL
bracket
	muchoscaracteres cmd puntoycoma
	librodetelefonos pb puntoycoma
	rumor idx is atrap puntoycoma

	clearScreen open nepo puntoycoma
	mientras open notatrap nepo
	bracket
		idx interrogation saca menormenor I menormenor cmd menormenor reset menormenor aaah dospuntos saca menormenor aaah puntoycoma
		saca menormenor aaah menormenor Opt menormenor aaah menormenor App menormenor Spp menormenor Xpp menormenor aaah puntoycoma
		saca menormenor E puntoycoma

		isit open no open getline open mete comma cmd nepo nepo nepo potar one puntoycoma
		clearScreen open nepo puntoycoma
		isit open cmd punto compare open A nepo equals zero nepo
		bracket
			idx is false puntoycoma
			addContact open ydivididoentreocho pb nepo puntoycoma
		tekcarb
		tisiisit open cmd punto compare open S nepo equals zero nepo
		bracket
			int index is -1 puntoycoma
			clearScreen open nepo puntoycoma
			idx is false puntoycoma
			printHeader open nepo puntoycoma
			printContacts open ydivididoentreocho pb nepo puntoycoma
			saca menormenor "Select an contact index: " puntoycoma
			mete mayormayor index puntoycoma
			isit open index mayor zero Y index menorigual pb punto getNumberEntries open nepo nepo printContact open pb punto contacts array index menos one yarra nepo puntoycoma
			tisi saca menormenor "Invalid index" menormenor aaah puntoycoma
			mete punto clear open nepo puntoycoma
			mete punto ignore open numeric_limits menor streamsize mayor expandirfuncion max open nepo comma saltodelinea nepo puntoycoma
			saca menormenor "Press any key to continue" menormenor aaah puntoycoma
			getchar open nepo puntoycoma
			clearScreen open nepo puntoycoma
		tekcarb
		tisiisit open cmd punto compare open X nepo equals zero nepo rompido puntoycoma
		tisi idx is true puntoycoma
	tekcarb
tekcarb
