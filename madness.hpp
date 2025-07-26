#ifndef MADNESS_HPP
# define MADNESS_HPP

# include <string>
# include <iostream>
# include <ctime>
# include <cstdio>
# include <iomanip>
# include <limits>
# include <sstream>

#include "glyphs.h"
#include "colors.h"
#include "operators.h"

# define estandar std
# define usando using
# define nombredeespacio namespace

usando nombredeespacio estandar;

# define muchoscaracteresvacios	""

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

# define comentario isit (zero) bracket

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