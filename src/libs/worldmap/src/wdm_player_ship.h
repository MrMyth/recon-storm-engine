//============================================================================================
//    Spirenkov Maxim, 2001
//--------------------------------------------------------------------------------------------
//    Sea Dogs II
//--------------------------------------------------------------------------------------------
//    WdmPlayerShip
//--------------------------------------------------------------------------------------------
//
//============================================================================================

#pragma once

#include "wdm_ship.h"

class WdmPlayerShip : public WdmShip
{
    // --------------------------------------------------------------------------------------------
    // Construction, destruction
    // --------------------------------------------------------------------------------------------
  public:
    WdmPlayerShip();
    ~WdmPlayerShip() override;

    void PushOutFromIsland();

    void SetActionRadius(float radius);
    void SetStormActionRadius(float radius);
    float GetActionRadius();
    float GetStormActionRadius();

    // Calculations
    void Update(float dltTime) override;
    void LRender(VDX9RENDER *rs) override;

    // Check when exiting the map
    bool ExitFromMap();
    // Checking for a ship in a storm
    int32_t TestInStorm() const;

    float GetAy() const;

    bool canSkip;

  protected:
    // Move the ship
    virtual void Move(float dltTime);

    void Collide() override;

    // --------------------------------------------------------------------------------------------
    // Encapsulation
    // --------------------------------------------------------------------------------------------
  private:
    bool goForward;
    float actionRadius;
    float stormActionRadius;
    float stormEventTime;
};

inline float WdmPlayerShip::GetAy() const
{
    return ay;
}
