#pragma once

#include <iostream>
#include "dinstring.hpp"
#include "spellinfo.hpp"

enum target{SOLO, FRIENDLY, PARTY, HOSTILE, AOE, TARNULL};
class skill{
private:
	DinString name;
	damage spellinfo;
	unsigned short rank;
	target targetType;
public:
	skill() : name(), spellinfo(), rank(0), targetType(TARNULL) {}
	skill(const DinString& refName, const damage& refSkillinfo, const unsigned short refRank, target refTargetType) :
		name(refName), spellinfo(refSkillinfo), rank(refRank), targetType(refTargetType){}
	skill(const skill& ref) : name(ref.getName()), skillinfo(ref.getSpellinfo()), rank(ref.getType()), targetType(ref.getTargetType()){}
	DinString getName()const{return name;}
	damage getSpellinfo()const{return spellinfo;}
	unsigned short getRank()const{return rank;}
	target getTargetType()const{return targetType;}
	void setName(DinString ref){name = ref;}
	void setSpellinfo(const damage& ref){spellinfo = ref;}
	void setRank(const unsigned short& ref){rank = ref;}
	void setTargetType(target ref){targetType = ref;}
};
