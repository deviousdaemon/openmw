#ifndef OPENMW_ESSIMPORT_PLAYER_H
#define OPENMW_ESSIMPORT_PLAYER_H

#include <vector>
#include <string>

#include <components/esm/defs.hpp>
#include <components/esm/cellref.hpp>
#include <components/esm/esmcommon.hpp>

#include "importacdt.hpp"

namespace ESM
{
    class ESMReader;
}

namespace ESSImport
{

/// Player-agnostic player data
struct REFR
{
    ActorData mActorData;

    std::string mRefID;
    ESM::Position mPos;
    ESM::RefNum mRefNum;

    void load(ESM::ESMReader& esm);
};

/// Other player data
struct PCDT
{
    int mBounty;
    std::string mBirthsign;

    std::vector<std::string> mKnownDialogueTopics;

    struct FNAM
    {
        unsigned char mRank;
        unsigned char mUnknown1[3];
        int mReputation;
        unsigned char mFlags; // 0x1: unknown, 0x2: expelled
        unsigned char mUnknown2[3];
        ESM::NAME32 mFactionName;
    };
    std::vector<FNAM> mFactions;

    void load(ESM::ESMReader& esm);
};

}

#endif
