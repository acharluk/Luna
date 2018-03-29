#pragma once

#define LUNA_VERSION "0.8.0-15"

#ifdef LUNA_STANDALONE
#define RES_PATH "res/"
#elif (defined LUNA_DEBUG)
#define RES_PATH "resources/luna/"
#elif (defined _WIN32 || defined _WIN64)
#define RES_PATH "C:/Program Files (x86)/XyronLabs/Luna/res/"
#elif (defined LINUX || defined __linux__)
#define RES_PATH "/usr/local/luna/res/"
#elif (defined __APPLE || defined __MACH__)
#define RES_PATH "res/"
#endif

#define getLunaResource(path) (std::string(RES_PATH) + path).c_str()

#define registerLunaFunction(func)  lua_register(L, #func, lunaL::func)