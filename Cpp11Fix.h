// AGS2Client
// Client Plugin Interface for AGS
// Copyright © 2015-2016 MonkeyMoto Productions, Inc.
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

#define MAKE_HEADER(arg) <arg>
#define TR1INCLUDE(arg) MAKE_HEADER(arg) // default for C++11 compilers and MSVC (no tr1 folder)

#ifndef AGS2CLIENT_HAS_CPP11

#define constexpr
#define noexcept
#define nullptr 0
#define STD_INT32_T int
#define DEFAULT_CTOR(x) inline x() noexcept {}
#define DEFAULT_DTOR(x) inline ~x() noexcept {}

#ifndef _MSC_VER
#undef TR1INCLUDE
#define TR1INCLUDE(arg) MAKE_HEADER(tr1/arg) // non-MSVC compilers prior to C++11 need tr1 folder
#endif // !_MSC_VER

namespace std { namespace tr1 {} }
namespace stdtr1compat = std::tr1;

#else // C++11

#include <cstdint>

#define STD_INT32_T std::int32_t
#define DEFAULT_CTOR(x) x() noexcept = default
#define DEFAULT_DTOR(x) ~x() noexcept = default

namespace stdtr1compat = std;

#endif // C++11

#endif // CPP11FIX_H