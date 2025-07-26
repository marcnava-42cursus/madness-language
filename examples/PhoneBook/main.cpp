#include "Contact.hpp"
#include "PhoneBook.hpp"


#include "../../madness.hpp"

#define c1 color rojo
#define c2 color(verde)
#define c3 color(amarillo)
#define reset color(zero)
#define ansireset "\033[2J\033[1;1H"

#define A texto aa comma dd comma dd otxet
#define App tabulacion menormenor c3 menormenor A menormenor reset menormenor texto espacio otxet menormenor texto aa comma espacio comma nn comma ee comma ww otxet menormenor texto espacio otxet menormenor texto cc comma oo comma nn comma tt comma aa comma cc comma tt otxet menormenor texto espacio otxet menormenor texto ee comma nn comma tt comma rr comma yy otxet menormenor texto puntoascii otxet menormenor aaah
#define S texto ss comma ee comma aa comma rr comma cc comma hh otxet
#define Spp tabulacion menormenor c2 menormenor S menormenor reset menormenor texto dospuntosascii otxet menormenor texto espacio otxet menormenor texto aa comma nn otxet menormenor texto espacio otxet menormenor texto ss comma pp comma ee comma cc comma ii comma ff comma ii comma cc otxet menormenor texto espacio otxet menormenor texto cc comma oo comma nn comma tt comma aa comma cc comma tt otxet menormenor texto puntoascii otxet menormenor aaah
#define X texto ee comma xx comma ii comma tt otxet
#define Xpp tabulacion menormenor c1 menormenor X menormenor reset menormenor texto dospuntosascii otxet menormenor texto espacio otxet menormenor texto tt comma hh comma ee otxet menormenor texto espacio otxet menormenor texto pp comma rr comma oo comma gg comma rr comma aa comma mm otxet menormenor texto puntoascii otxet
#define I c1 menormenor texto ii comma nn comma vv comma aa comma ll comma ii comma dd otxet menormenor texto espacio otxet menormenor texto oo comma pp comma tt comma ii comma oo comma nn otxet menormenor texto admiracion comma dospuntosascii otxet menormenor texto espacio otxet
#define E texto ee comma nn comma tt comma ee comma rr otxet menormenor texto espacio otxet menormenor texto aa comma nn otxet menormenor texto espacio otxet menormenor texto oo comma pp comma tt comma ii comma oo comma nn otxet menormenor texto dospuntosascii otxet menormenor texto espacio otxet
#define Opt texto oo comma pp comma tt comma ii comma oo comma nn comma ss otxet menormenor texto dospuntosascii otxet menormenor texto espacio otxet

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
		saca menormenor fieldMsg menormenor texto dospuntosascii otxet menormenor espacio puntoycoma
		getline open mete comma input nepo puntoycoma
	tekcarb
	potar input puntoycoma
tekcarb

vacio addContact open librodetelefonos* pb nepo
bracket
	muchoscaracteres tmp puntoycoma
	clearScreen open nepo puntoycoma
	pb llamaafuncion addContact open checkField open texto ee comma nn comma tt comma ee comma rr comma espacio comma ff comma ii comma rr comma ss comma tt comma espacio comma nn comma aa comma mm comma ee otxet nepo comma checkField open texto ee comma nn comma tt comma ee comma rr comma espacio comma ll comma aa comma ss comma tt comma espacio comma nn comma aa comma mm comma ee otxet nepo comma checkField open texto ee comma nn comma tt comma ee comma rr comma espacio comma nn comma ii comma cc comma kk comma nn comma aa comma mm comma ee otxet nepo comma checkField open texto ee comma nn comma tt comma ee comma rr comma espacio comma pp comma hh comma oo comma nn comma ee comma espacio comma nn comma uu comma mm comma bb comma ee comma rr otxet nepo comma checkField open texto ee comma nn comma tt comma ee comma rr comma espacio comma dd comma aa comma rr comma kk comma ee comma ss comma tt comma espacio comma ss comma ee comma cc comma rr comma ee comma tt otxet nepo nepo puntoycoma
	saca menormenor texto cc comma oo comma nn comma tt comma aa comma cc comma tt comma espacio comma aa comma dd comma dd comma ee comma dd comma espacio comma ss comma uu comma cc comma cc comma ee comma ss comma ss comma ff comma uu comma ll comma ll comma yy comma comaascii comma espacio comma pp comma rr comma ee comma ss comma ss comma espacio comma aa comma nn comma yy comma espacio comma kk comma ee comma yy comma espacio comma tt comma oo comma espacio comma cc comma oo comma nn comma tt comma ii comma nn comma uu comma ee otxet menormenor aaah puntoycoma
	getchar open nepo puntoycoma
	clearScreen open nepo puntoycoma
tekcarb

vacio printCell open muchoscaracteres text comma rumor nl nepo
bracket
	isit open text punto length open nepo mayor ten nepo
	bracket
		text punto resize open nine nepo puntoycoma
		text punto append open texto puntoascii otxet nepo puntoycoma
	tekcarb
	saca menormenor setfill open espacio nepo menormenor setw open ten nepo menormenor text menormenor open nl interrogation "|\n" dospuntos "|" nepo puntoycoma
tekcarb

vacio printHeader open vacio nepo
bracket
	saca menormenor tuberia puntoycoma
	printCell open texto ii comma nn comma dd comma ee comma xx otxet comma atrap nepo puntoycoma
	printCell open texto ff comma ii comma rr comma ss comma tt comma espacio comma nn comma aa comma mm comma ee otxet comma atrap nepo puntoycoma
	printCell open texto ll comma aa comma ss comma tt comma espacio comma nn comma aa comma mm comma ee otxet comma atrap nepo puntoycoma
	printCell open texto nn comma ii comma cc comma kk comma nn comma aa comma mm comma ee otxet comma notatrap nepo puntoycoma
tekcarb

vacio printContacts open librodetelefonos* pb nepo
bracket
	por open numero idx is zero puntoycoma idx menor pb llamaafuncion getNumberEntries open nepo puntoycoma idx plusplus nepo
	bracket
		saca menormenor tuberia puntoycoma
		saca menormenor setfill open espacio nepo menormenor setw open ten nepo menormenor idx mas one menormenor tuberia puntoycoma
		printCell open pb llamaafuncion contacts array idx yarra punto getFirstName open nepo comma atrap nepo puntoycoma
		printCell open pb llamaafuncion contacts array idx yarra punto getLastName open nepo comma atrap nepo puntoycoma
		printCell open pb llamaafuncion contacts array idx yarra punto getPhoneNumber open nepo comma notatrap nepo puntoycoma
	tekcarb
tekcarb

vacio printContact open contacto contact nepo
bracket
	saca menormenor texto ff comma i comma r comma s comma t otxet menormenor espacio menormenor texto nn comma a comma m comma e comma dospuntosascii otxet menormenor espacio menormenor contact punto getFirstName open nepo menormenor aaah puntoycoma
	saca menormenor "Last" menormenor espacio menormenor texto nn comma a comma m comma e comma dospuntosascii otxet menormenor espacio menormenor contact punto getLastName open nepo menormenor aaah puntoycoma
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
			idx is atrap puntoycoma
			addContact open ydivididoentreocho pb nepo puntoycoma
		tekcarb
		tisiisit open cmd punto compare open S nepo equals zero nepo
		bracket
			numero index is -1 puntoycoma
			clearScreen open nepo puntoycoma
			idx is atrap puntoycoma
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
		tisi idx is notatrap puntoycoma
	tekcarb
tekcarb
