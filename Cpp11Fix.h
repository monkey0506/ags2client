// AGS2Client
// Client Plugin Interface for AGS
// Copyright � 2015-2016 MonkeyMoto Productions, Inc.
//
// This work is free. You can redistribute it and/or modify it under the
// terms of the Do What The Fuck You Want To Public License, Version 2,
// as published by Sam Hocevar. See the LICENSE file for more details.
//
//            DO WHAT THE FUCK YOU WANT TO PUBLIC LICENSE
//                    Version 2, December 2004
//
// Copyright (C) 2004 Sam Hocevar <sam@hocevar.net>
//
// Everyone is permitted to copy and distribute verbatim or modified
// copies of this license document, and changing it is allowed as long
// as the name is changed.
//
//            DO WHAT THE FUCK YOU WANT TO PUBLIC LICENSE
//   TERMS AND CONDITIONS FOR COPYING, DISTRIBUTION AND MODIFICATION
//
//  0. You just DO WHAT THE FUCK YOU WANT TO.
//
#ifndef CPP11FIX_H
#define CPP11FIX_H

#if ((__cplusplus >= 201103L) || (defined(_MSC_VER) && (_MSC_VER >= 1900)))
#define AGS2CLIENT_HAS_CPP11
#endif

#ifndef AGS2CLIENT_HAS_CPP11

#define constexpr
#define noexcept
#define nullptr 0
#define STD_INT32_T int

#else // C++11

#include <cstdint>

#define STD_INT32_T std::int32_t

#endif // C++11

#endif // CPP11FIX_H