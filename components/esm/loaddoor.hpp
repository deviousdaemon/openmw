#ifndef OPENMW_ESM_DOOR_H
#define OPENMW_ESM_DOOR_H

#include <string>

namespace ESM
{

class ESMReader;
class ESMWriter;

struct Door
{
    std::string mId, mName, mModel, mScript, mOpenSound, mCloseSound;

    void load(ESMReader &esm);
    void save(ESMWriter &esm);

    void blank();
    ///< Set record to default state (does not touch the ID).
};
}
#endif
