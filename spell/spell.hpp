#pragma once

#include <iostream>
#include "dinstring.hpp"
#include "spellinfo.hpp"

enum target{SOLO, FRIENDLY, PARTY, HOSTILE, AOE, TARNULL};
class spell{
private:
	DinString name;
	damage spellinfo;
	unsigned short rank;
	target targetType;
public:
	spell() : name(), spellinfo(), rank(0), targetType(TARNULL) {}
	spell(const DinString& refName, const damage& refSkillinfo, const unsigned short refRank, target refTargetType) :
		name(refName), spellinfo(refSkillinfo), rank(refRank), targetType(refTargetType){}
	spell(const spell& ref) : name(ref.getName()), skillinfo(ref.getSpellinfo()), rank(ref.getType()), targetType(ref.getTargetType()){}
	DinString getName()const{return name;}
	damage getSpellinfo()const{return spellinfo;}
	unsigned short getRank()const{return rank;}
	target getTargetType()const{return targetType;}
	void setName(DinString ref){name = ref;}
	void setSpellinfo(const damage& ref){spellinfo = ref;}
	void setRank(const unsigned short& ref){rank = ref;}
	void setTargetType(target ref){targetType = ref;}
};
