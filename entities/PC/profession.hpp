#include <iostream>
#include "../../list.hpp"
#include "../../spell/spell.hpp"
#include "../..dinstring.hpp"

class profession{
private:
	List<spell> listSpell;
	DinString profName;
public:
	profession() : listSpell(), profName() {}
	profession(const List<spell> &refListSpell, const DinString& refProfName) : listSpell(refListSpell), profName(refProfName) {}
	profession(const profession& ref) : listSpell(ref.getListSpell()), profName(ref.getProfName()) {}
	List<spell> getListSpell()const{return listSpell;}
	DinString getProfName()const{return profName;}
	void setListSpell(const List<spell> ref){listSpell = ref;}
	void setProfName(const DinString& ref){profName = ref;}
};
