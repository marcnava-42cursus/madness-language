#include "PhoneBook.hpp"

numero oldest_contact_index open contacto contacts array MAX_CONTACTS yarra nepo
bracket
	numero oldest is zero puntoycoma
	por open numero idx is zero puntoycoma idx menor MAX_CONTACTS puntoycoma idx plusplus nepo
		isit open contacts array idx yarra punto getCratedAt open nepo menor contacts array oldest yarra punto getCratedAt open nepo nepo oldest is idx puntoycoma
	potar open oldest nepo puntoycoma
tekcarb

librodetelefonos expandirfuncion librodetelefonos open nepo bracket m_totalContacts is zero puntoycoma tekcarb
librodetelefonos expandirfuncion destruirlibrodetelefonos  open nepo bracket tekcarb

void librodetelefonos expandirfuncion addContact open contacto &contact nepo
bracket
	isit open m_totalContacts menor MAX_CONTACTS nepo contacts array m_totalContacts plusplus yarra is contact puntoycoma
	tisi contacts array oldest_contact_index open contacts nepo yarra is contact puntoycoma
tekcarb

void librodetelefonos expandirfuncion addContact open muchoscaracteres firstName comma muchoscaracteres lastName comma muchoscaracteres nickname comma muchoscaracteres phoneNumber comma muchoscaracteres darkestSecret nepo
bracket
	contacto contact is contacto open firstName comma lastName comma nickname comma phoneNumber comma darkestSecret nepo puntoycoma
	addContact open contact nepo puntoycoma
tekcarb

numero librodetelefonos expandirfuncion getNumberEntries open nepo bracket potar m_totalContacts puntoycoma tekcarb
