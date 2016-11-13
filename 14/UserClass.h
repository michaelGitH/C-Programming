#pragma once
class User
{
public:
	User(int u = 0) : user(u){}
	bool operator==(User right) {
		return this->user == right.user ? true : false;
	}
private:
	int user;
};