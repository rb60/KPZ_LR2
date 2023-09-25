#pragma once


class IPackage
{
public:
	virtual int getWeight() = 0;
	virtual char* getType() = 0;
	virtual char* toDeliver() = 0;
	virtual void destroy() = 0;
};

class IPackageFactory
{
public:
	virtual IPackage* CreatePackage() = 0;
	virtual void destroy() = 0;
};
