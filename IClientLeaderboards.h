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
#ifndef AGS2CLIENT_ICLIENTLEADERBOARDS_H
#define AGS2CLIENT_ICLIENTLEADERBOARDS_H

#include "Cpp11Fix.h"
#include "DllExports.h"

namespace AGS2Client
{
	namespace LeaderboardScore
	{
		enum Type
		{
			Global = 0,
			AroundUser = 1,
			Friends = 2
		}; // Type
	} // LeaderboardScore

    class IClientLeaderboards
    {
    public:
		virtual void RequestLeaderboard(char const *leaderboardName, LeaderboardScore::Type type, int limit) const = 0;
        virtual bool UploadScore(int score) const = 0;
        virtual char const* GetCurrentLeaderboardName() const = 0;
        virtual char const* GetLeaderName(int index) const = 0;
        virtual int GetLeaderScore(int index) const = 0;
        virtual int GetLeaderCount() const = 0;
        virtual ~IClientLeaderboards() = 0;
    };

    AGS2CLIENT_EXPORT IClientLeaderboards* GetClientLeaderboards() noexcept;
    AGS2CLIENT_EXPORT void ClientLeaderboards_RequestLeaderboard(char const *leaderboardName, int type, int limit) noexcept;
    AGS2CLIENT_EXPORT int ClientLeaderboards_UploadScore(int score) noexcept;
    AGS2CLIENT_EXPORT char const* ClientLeaderboards_GetCurrentLeaderboardName() noexcept;
    AGS2CLIENT_EXPORT char const* ClientLeaderboards_GetLeaderName(int index) noexcept;
    AGS2CLIENT_EXPORT int ClientLeaderboards_GetLeaderScore(int index) noexcept;
    AGS2CLIENT_EXPORT int ClientLeaderboards_GetLeaderCount() noexcept;
} // namespace AGS2Client

#endif // AGS2CLIENT_ICLIENTLEADERBOARDS_H
