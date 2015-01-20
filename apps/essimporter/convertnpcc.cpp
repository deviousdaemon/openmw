#include "convertnpcc.hpp"

namespace ESSImport
{

    void convertNPCC(const NPCC &npcc, ESM::NpcState &npcState)
    {
        npcState.mNpcStats.mReputation = npcc.mNPDT.mReputation;
    }
}