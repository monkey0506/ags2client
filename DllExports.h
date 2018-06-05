// AGS2Client
// Client Plugin Interface for AGS
// Copyright © 2015-2018 MonkeyMoto Productions, Inc.
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
#ifndef AGS2CLIENT_DLLEXPORTS_H
#define AGS2CLIENT_DLLEXPORTS_H

#ifdef WINDOWS_VERSION
#define AGS2CLIENT_EXPORT extern "C" __declspec(dllexport)
#else // not Windows (Linux/Mac OS)
// compile with -fvisibility=hidden on Mac
#define AGS2CLIENT_EXPORT extern "C" __attribute__((visibility("default")))
#endif // WINDOWS_VERSION

#endif // AGS2CLIENT_DLLEXPORTS_H
