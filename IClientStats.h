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
#ifndef AGS2CLIENT_ICLIENTSTATS_H
#define AGS2CLIENT_ICLIENTSTATS_H

namespace AGS2Client
{
    enum class ClientStatTypes
    {
        ClientStatInt = 0,
        ClientStatFloat = 1,
        ClientStatAvgRate = 2
    };

    class IClientStats
    {
    public:
        virtual int GetIntStat(char const *name) const = 0;
        virtual float GetFloatStat(char const *name) const = 0;
        virtual float GetAverageRateStat(char const *name) const = 0;
        virtual bool SetIntStat(char const *name, int value) const = 0;
        virtual bool SetFloatStat(char const *name, float value) const = 0;
        virtual bool UpdateAverageRateStat(char const *name, float countThisSession, float sessionLength) const = 0;
        virtual ~IClientStats() = 0;
    }; // class IClientStats

    IClientStats* GetClientStats() noexcept;
    int ClientStats_GetIntStat(char const *name) noexcept;
    float ClientStats_GetFloatStat(char const *name) noexcept;
    float ClientStats_GetAverageRateStat(char const *name) noexcept;
    int ClientStats_SetIntStat(char const *name, int value) noexcept;
    int ClientStats_SetFloatStat(char const *name, float value) noexcept;
    int ClientStats_UpdateAverageRateStat(char const *name, float countThisSession, float sessionLength) noexcept;
} // namespace AGS2Client

#endif // AGS2CLIENT_ICLIENTSTATS_H
