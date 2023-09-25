#pragma once
#include "IPackageFactory.h"

class DocumentFactory : public IPackageFactory
{
	IPackage* CreatePackage() override;
	void destroy() override;
};

class Document : public IPackage
{
	int getWeight() override;
	char* getType() override;
	char* toDeliver() override;
	void destroy() override;
};

class ClothesFactory : public IPackageFactory
{
	IPackage* CreatePackage() override;
	void destroy() override;
};

class Clothes : public IPackage
{
	int getWeight() override;
	char* getType() override;
	char* toDeliver() override;
	void destroy() override;
};

class ProductsFactory : public IPackageFactory
{
	IPackage* CreatePackage() override;
	void destroy() override;
};

class Products : public IPackage
{
	int getWeight() override;
	char* getType() override;
	char* toDeliver() override;
	void destroy() override;
};

extern "C" __declspec(dllexport) IPackageFactory* createDocumentFactory();
extern "C" __declspec(dllexport) IPackageFactory* createClothesFactory();
extern "C" __declspec(dllexport) IPackageFactory* createProductsFactory();



