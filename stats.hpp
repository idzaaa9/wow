#pragma once

#include <iostream>

struct prim{
  ////////////////////////////////
  float str, agi, intel, stam, spi;
  ////////////////////////////////
  prim() : str(0), agi(0), intel(0), stam(0), spi(0){}
  prim(const float& strRef, const float &agiRef, const float& intelRef, const float& stamRef, const float& spiRef) : str(strRef), agi(agiRef), intel(intelRef), stam(stamRef), spi(spiRef) {}
  prim(const prim& ref) : str(ref.str), agi(ref.agi), intel(ref.intel), stam(ref.stam), spi(ref.spi) {}}; //primarni statusi za armor

struct ms{
  ////////////////////////////
  float apen, as, ap, csc, hc;
  ///////////////////////////
  ms() : apen(0), as(0), ap(0), csc(0), hc(0) {}
  ms(const float& apenRef, const float& asRef, const float& apRef, const float& cscRef, const float &hcRef) : apen(apenRef), as(asRef), ap(apRef), csc(cscRef), hc(hcRef) {}
    ms(const ms& ref) : apen(ref.apen), as(ref.as), ap(ref.ap), csc(ref.csc), hc(ref.hc) {}};  //melee stats

struct cs{
  /////////////////////////////
  float sp, hp, scsc, mp5, spen;
  /////////////////////////////
  cs() : sp(0), hp(0), scsc(0), mp5(0), spen(0){}
  cs(const float& spRef, const float& hpRef, const float& scscRef, const float& mp5Ref, const float& spenRef) : sp(spRef), hp(hpRef), scsc(scscRef), mp5(mp5Ref), spen(spenRef) {}
  cs(const cs& ref) : sp(ref.sp), hp(ref.hp), scsc(ref.scsc), mp5(ref.mp5), spen(ref.spen){}}; //caster stats

struct res{
  //////////////////////////////////////////
  float frost, fire, arcane, shadow, nature;
  /////////////////////////////////////////
  res() : frost(0), fire(0), arcane(0), shadow(0), nature(0){}
  res(const float& natureRef, const float& shadowRef, const float& arcaneRef, const float& fireRef, const float& frostRef) : frost(frostRef), shadow(shadowRef), arcane(arcaneRef), fire(fireRef), nature(natureRef){}
  res(const res& ref) : frost(ref.frost), fire(ref.fire), arcane(ref.arcane), shadow(ref.shadow), nature(ref.nature){}}; //resistances

struct wpnskill{
  ////////////////////////////////////////////////////////////////////////////////////////////////////////
  float axe1h, axe2h, bow, cbow, dag, fwep, gun, mace1h, mace2h, parm, staff, sword1h, sword2h, twep, wand;
  ////////////////////////////////////////////////////////////////////////////////////////////////////////
  wpnskill(): axe1h(0), axe2h(0), bow(0), cbow(0), dag(0), fwep(0), gun(0), mace1h(0), mace2h(0), parm(0), staff(0), sword1h(0), sword2h(0), twep(0), wand(0) {}
  wpnskill(const float& Refaxe1h , const float& Refaxe2h, const float& Refbow, const float& Refcbow, const float& Refdag, const float& Reffwep, const float& Refgun, const float& Refmace1h, const float& Refmace2h, const float& Refparm, const float& Refstaff, const float& Refsword1h, const float& Refsword2h, const float& Reftwep, const float& Refwand) : axe1h(Refaxe1h) , axe2h(Refaxe2h), bow(Refbow), cbow(Refcbow), dag(Refdag), fwep(Reffwep), gun(Refgun), mace1h(Refmace1h), mace2h(Refmace2h), parm(Refparm), staff(Refstaff), sword1h(Refsword1h), sword2h(Refsword2h), twep(Reftwep), wand(Refwand){}
  wpnskill(const wpnskill& ref) :  axe1h(ref.axe1h), axe2h(ref.axe2h), bow(ref.bow), cbow(ref.cbow), dag(ref.dag), fwep(ref.fwep), gun(ref.gun), mace1h(ref.mace1h), mace2h(ref.mace2h), parm(ref.parm), staff(ref.staff), sword1h(ref.sword1h), sword2h(ref.sword2h), twep(ref.twep), wand(ref.wand){}}; //weapon stats

struct stats{
  float armor;
  prim STprim;
  ms STMS;
  cs STCS;
  res STRES;
  wpnskill STWPNSKILL;
  stats() : STprim(), STMS(), STCS(), STRES(), STWPNSKILL(), armor(0){}
  stats(const prim& refprim, const ms& refMs, const cs& refCs, const res& refRes, const wpnskill& refWpnskill, const float& refArmor) : STprim(refprim), STMS(refMs),STCS(refCs), STRES(refRes), STWPNSKILL(refWpnskill), armor(refArmor) {}
  stats(const stats& ref) : STprim(ref.STprim), STMS(ref.STMS), STCS(ref.STCS), STRES(ref.STRES), STWPNSKILL(ref.STWPNSKILL){}
};
//more info on https://classic.wowhead.com/guides/classic-wow-stats-and-attributes-overview
