#ifndef MADNESS_HPP
# define MADNESS_HPP

# include <string>
# include <iostream>
# include <ctime>
# include <cstdio>
# include <iomanip>
# include <limits>
# include <sstream>

# define estandar std
# define usando using
# define nombredeespacio namespace

usando nombredeespacio estandar;

# define a		97
# define b		98
# define c		99
# define d		100
# define e		101
# define f		102
# define g		103
# define h		104
# define i		105
# define j		106
# define k		107
# define l		108
# define m		109
# define n		110
# define o		111
# define p		112
# define q		113
# define r		114
# define s		115
# define t		116
# define u		117
# define v		118
# define w		119
# define x		120
# define y		121
# define z		122

# define aa		65
# define bb		66
# define cc		67
# define dd		68
# define ee		69
# define ff		70
# define gg		71
# define hh		72
# define ii		73
# define jj		74
# define kk		75
# define ll		76
# define mm		77
# define nn		78
# define oo		79
# define pp		80
# define qq		81
# define rr		82
# define ss		83
# define tt		84
# define uu		85
# define vv		86
# define ww		87
# define xx		88
# define yy		89
# define zz		90

# define zero	0
# define one	1
# define two	2
# define three	3
# define four	4
# define five	5
# define six	6
# define seven	7
# define eight	8
# define nine	9
# define ten	10

# define rojo 31
# define verde 32
# define amarillo 33

# define cero					'0'
# define uno					'1'
# define dos					'2'
# define tres					'3'
# define cuatro					'4'
# define cinco					'5'
# define seis					'6'
# define siete					'7'
# define ocho					'8'
# define nueve					'9'

# define tabulacion				'\t'
# define saltodelinea			'\n'
# define tabulacionvertical		'\v'
# define retornodecarro			'\r'
# define alimentarformulario	'\f'
# define espacio				' '
# define puntoascii				'.'
# define comaascii				','
# define dospuntosascii			':'
# define puntocoma				';'
# define admiracion				'!'
# define interrogacion			'?'
# define comillasdobles			'\"'
# define comillassimples		'\''
# define cajaascii				'['
# define ajacascii				']'
# define barra					'/'
# define barrainvertida			'\\'
# define admiracion				'!'
# define tuberia				'|'

# define muchoscaracteresvacios	""

# define interrogation ?
# define is =
# define virgulilla ~
# define menormenor <<
# define mayormayor >>
# define Y &&
# define O ||
# define no !
# define mas +
# define menos -
# define multiplicadopor *
# define divididoentre /
# define llamaafuncion ->
# define menor <
# define mayor >
# define menorigual <=
# define mayorigual >=
# define distinto !=
# define equals ==
# define plusplus ++
# define menosmenos --
# define plusn +=
# define menosn -=
# define porn *=
# define partidoporn /=
# define restoporn %=
# define desplazamientoaladerecha >>
# define desplazamientoalaizquierda <<
# define ydivididoentreocho &
# define odivididoentreocho |
# define oexclusivodivididoentreocho ^
# define ydivididoentreochon &=
# define odivididoentreochon |=
# define oexclusivodivididoentreochon ^=
# define puntoycoma ;
# define dospuntos :
# define expandirfuncion ::
# define comma ,
# define punto .
# define open (
# define nepo )
# define bracket {
# define tekcarb }
# define array [
# define yarra ]

# define aaah endl
# define saca cout
# define mete cin
# define cisternatime flush
# define principal main

# define muchoscaracteres string
# define caracter char
# define rumor bool
# define notatrap true
# define atrap false
# define numero int
# define vacio void
# define mordisco byte
# define corto short
# define largo long
# define larguisimo long long
# define numerolargo long int
# define largocorto long short
# define coche auto
# define dinero global
# define juntito union
# define fijo const
# define punterocaracter char*
# define aula class
# define capitalismo private
# define comunismo public

# define potar return
# define palante continue
# define rompido break
# define isit if
# define tisiisit else if
# define tisi else
# define hacer do
# define mientras while
# define por for
# define router switch
# define puerto case
# define pordefecto default
# define ira goto

# define comentario if (0) {

# define starttheGABRIEL numero principal open vacio nepo

# define texto ascii_string_arr open open numero array yarra nepo bracket
# define otxet comma zero tekcarb nepo

# define color(code) color_ascii open code nepo

inline muchoscaracteres ascii_string_arr open fijo numero* arr nepo  bracket
	muchoscaracteres result is muchoscaracteresvacios puntoycoma
	numero idx is zero puntoycoma
	mientras open arr array idx yarra distinto zero nepo result plusn static_cast menor caracter mayor open arr array idx plusplus yarra nepo puntoycoma
potar result puntoycoma
tekcarb

inline muchoscaracteres color_ascii open numero code nepo
bracket
	ostringstream oss puntoycoma
	oss menormenor "\033" menormenor texto cajaascii otxet menormenor code menormenor texto m otxet puntoycoma
	potar open oss punto str open nepo nepo puntoycoma
tekcarb

#endif