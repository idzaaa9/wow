#include <iostream>

#include "stats.hpp"


enum dmgType{PHYSICAL, HOLY, FIRE, FROST, SHADOW, NATURE, ARCANE, HEAL, TYPENULL};
class damage{
private:
	dmgType type;
	bool effectType;//0 za heal, 1 za dmg
	bool durType;//0 za instant, 1 za overTime
	float effectAmount;
	float effectDuration;
public:
	damage() : type(TYPENULL), effectType(false), durType(false), effectAmount(0), effectDuration(0) {}
	damage(dmgType refType, bool refEffectType, bool refDurType, const float& refEffectAmount, const float& refEffectDuration) :
		type(refType), effectType(refEffectType), durType(refDurType), effectAmount(refEffectAmount), effectDuration(refEffectDuration) {}
	damage(const damage& ref) : type(ref.getType()), effectType(ref.getEffectType()), durType(ref.getDurType()), effectAmount(getEffectAmount()),
				    effectDuration(ref.getEffectDuration()) {}
	dmgType getType()const{return type;}
	bool getEffectType()const{return effectType;}
	bool durType()const{return durType;}
	float getEffectAmount()const{return effectAmount;}
	float getEffectDuration()const{return effectDuration;}
	void setType(dmgType ref){type = ref;}
	void setEffectType(bool ref){effectType = ref;}
	void setDurType(bool ref){durType = ref;}
	void setEffectAmount(const float& ref){effectAmount = ref;}
	void setEffectDuration(const float& ref){effectDuration = ref;}
};

	
