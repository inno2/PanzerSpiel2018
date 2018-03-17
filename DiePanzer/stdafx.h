// stdafx.h: Includedatei f�r Standardsystem-Includedateien
// oder h�ufig verwendete projektspezifische Includedateien,
// die nur in unregelm��igen Abst�nden ge�ndert werden.
//

#pragma once

#include "targetver.h"

#define WIN32_LEAN_AND_MEAN             // Selten verwendete Komponenten aus Windows-Headern ausschlie�en
// Windows-Headerdateien:
#include <Windows.h>
//
//// C RunTime-Headerdateien
//#include <stdlib.h>
//#include <malloc.h>
//#include <memory.h>
//#include <tchar.h>


// TODO: Hier auf zus�tzliche Header, die das Programm erfordert, verweisen.
#include "Game.h"
#include "Singleton.h"
#include "Graphics.h"
#include "InputSystem.h"