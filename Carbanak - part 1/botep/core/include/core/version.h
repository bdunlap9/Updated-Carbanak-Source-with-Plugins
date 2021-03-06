#pragma once

#include "core.h"

typedef	enum _NT_VERSION
{
	MICROSOFT_WINDOWS_XP0,
	MICROSOFT_WINDOWS_XP1,
	MICROSOFT_WINDOWS_XP2,
	MICROSOFT_WINDOWS_XP3,
	MICROSOFT_WINDOWS_2003_SP0,
	MICROSOFT_WINDOWS_2003_SP1,
	MICROSOFT_WINDOWS_2003_SP2,
	MICROSOFT_WINDOWS_2003_SP3,
	MICROSOFT_WINDOWS_VISTA_SP0,
	MICROSOFT_WINDOWS_VISTA_SP1,
	MICROSOFT_WINDOWS_VISTA_SP2,
	MICROSOFT_WINDOWS_VISTA_SP3,
	MICROSOFT_WINDOWS_2008_SP0,
	MICROSOFT_WINDOWS_2008_SP1,
	MICROSOFT_WINDOWS_2008_SP2,
	MICROSOFT_WINDOWS_2008R2_SP0,
	MICROSOFT_WINDOWS_2008R2_SP1,
	MICROSOFT_WINDOWS_2008R2_SP2,
	MICROSOFT_WINDOWS_7_SP0,
	MICROSOFT_WINDOWS_7_SP1,
	MICROSOFT_WINDOWS_7_SP2,
	MICROSOFT_WINDOWS_7_SP3,
	MICROSOFT_WINDOWS_8_SP0,
	MICROSOFT_WINDOWS_8_SP1,
	MICROSOFT_WINDOWS_8_SP2,
	MICROSOFT_WINDOWS_8_SP3,
	MICROSOFT_WINDOWS_2012_SP0,
	MICROSOFT_WINDOWS_2012_SP1,
	MICROSOFT_WINDOWS_2012_SP2,
	MICROSOFT_WINDOWS_2012_SP3,
	MICROSOFT_WINDOWS_81_SP0,
	MICROSOFT_WINDOWS_81_SP1,
	MICROSOFT_WINDOWS_81_SP2,
	MICROSOFT_WINDOWS_81_SP3,
	MICROSOFT_WINDOWS_2012R2_SP0,
	MICROSOFT_WINDOWS_2012R2_SP1,
	MICROSOFT_WINDOWS_2012R2_SP2,
	MICROSOFT_WINDOWS_2012R2_SP3,
	WIN_VERSION_HIGH
} NT_VERSION;

typedef enum _KERNEL_ARCHITECTURE
{
	Sys32bit,
	Sys64bit,
} KERNEL_ARCHITECTURE;

struct WindowsVersion
{
	NT_VERSION idVer;
	KERNEL_ARCHITECTURE architecture;
	SYSTEM_INFO systemInfo;
};

extern char* NT_VERSION_NAMES[];

bool GetWindowsVersion( WindowsVersion& wv );
NT_VERSION GetNTVersion( bool* x64 = 0 );
NT_VERSION GetNTVersion( StringBuilder& s );
