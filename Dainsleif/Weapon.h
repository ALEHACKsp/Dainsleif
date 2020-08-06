#pragma once
#include "pch.h"
#include "Entity.h"

enum WeaponID {
    NULLWEAPON = 0,
    KNIFE = 59,
    C4 = 49,

    GLOCK_HG = 4,
    DUAL_BERETTAS_HG = 2,
    P250_HG = 36,
    TEC9_HG = 30,
    DESERT_EAGLE_HG = 1,

    NOVA_SG = 35,
    XM1014_SG = 25,
    SAWED_OFF_SG = 29,

    M249_HEAVY = 14,
    NEGEV_HEAVY = 28,

    MAC10_SMG = 17,
    MP7_SMG = 33,
    UMP45_SMG = 24,
    P90_SMG = 19,
    PP_BIZON_SMG = 26,

    GALIL_AR = 13,
    AK47_AR = 7,
    SG553_AR = 39,

    SSG08_SR = 40,
    AWP_SR = 9,
    G3SG1_SR = 11,

    MOLOTOV_GN = 46,
    DECOY_GN = 47,
    FLASH_GN = 43,
    HE_GN = 44,
    SMOKE_GN = 45,

    ZEUS_X27 = 31,
};

class Weapon : public Entity
{
public:
    WeaponID GetWeaponID();
};