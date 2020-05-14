#include <iostream>
#include "../dinstring.hpp"
#include <map>

struct role{
        DinString name;
	bool kick, ban, add, bankAccess;
	role() : name(), kick(false), ban(false), add(false), bankAccess(false) {}
	role(const DinString& refName, bool refKick, bool refBan, bool refAdd, bool refBankAccess) :
		name(refName), kick(refKick), ban(refBan), bankAccess(refBankAccess) {}
	role(const role& ref) : name(ref.name), kick(ref.kick), ban(ref.ban), add(ref.add), bankAccess(ref.bankAccess) {}
};

class guild{
private:
	std::map<DinString, role> members;
	DinString name, guildMaster;
public:
	guild() : members(), name(), guildMaster() {}
	guild(const std::map<DinString, role> refMembers, const DinString& refName, const DinString& refGuildMaster) : members(refMembers), name(refName)
														       guildMaster(refGuildMaster) {}
	guild(const guild& ref) : members(ref.getMembers()), name(ref.getName()), guildMaster(ref.getGuildMaster) {}
	map<DinString, role> getMembers()const{return members;}
	DinString getName()const{return name;}
	DinString getGuildMaster()const{return guildMaster;}
	void setMembers(const std::map<DinString, role>& ref){members = ref;}
	void setName(const DinString& ref){name = ref;}
	void setGuildMaster(const DinString& ref){guildMaster = ref;}
};
