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
#include "IClientStats.h"

namespace AGS2Client
{
    int ClientStats_GetIntStat(char const *name)
    {
        return (GetClientStats() == nullptr ? 0 : GetClientStats()->GetIntStat(name));
    }

    float ClientStats_GetFloatStat(char const *name)
    {
        return (GetClientStats() == nullptr ? 0.0f : GetClientStats()->GetFloatStat(name));
    }

    float ClientStats_GetAverageRateStat(char const *name)
    {
        return (GetClientStats() == nullptr ? 0.0f : GetClientStats()->GetAverageRateStat(name));
    }

    int ClientStats_SetIntStat(char const *name, int value)
    {
        return (GetClientStats() == nullptr ? 0 : GetClientStats()->SetIntStat(name, value));
    }

    int ClientStats_SetFloatStat(const char *name, float value)
    {
        return (GetClientStats() == nullptr ? 0 : GetClientStats()->SetFloatStat(name, value));
    }

    int ClientStats_UpdateAverageRateStat(const char *name, float numerator, float denominator)
    {
        return (GetClientStats() == nullptr ? 0 : GetClientStats()->UpdateAverageRateStat(name, numerator, denominator));
    }

    IClientStats::~IClientStats()
    {
    }
} // namespace AGS2Client
