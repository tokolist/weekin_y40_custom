#pragma once

#define SOLENOID_PIN B6
#define SOLENOID_DEFAULT_DWELL 80

#ifndef NO_DEBUG
#define NO_DEBUG
#endif // !NO_DEBUG
#if !defined(NO_PRINT) && !defined(CONSOLE_ENABLE)
#define NO_PRINT
#endif // !NO_PRINT