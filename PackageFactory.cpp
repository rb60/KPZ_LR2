#include "PackageFactory.h"
#include <string.h>

IPackage* DocumentFactory::CreatePackage()
{
	return new Document();
}

void DocumentFactory::destroy()
{
	delete this;
}


int Document::getWeight()
{
	return 50;
}

char* Document::getType()
{
	return _strdup("Document");
}

char* Document::toDeliver()
{
	return _strdup("Document is delivered");
}

void Document::destroy()
{
	delete this;
}


IPackage* ClothesFactory::CreatePackage()
{
	return new Clothes();
}

void ClothesFactory::destroy()
{
	delete this;
}


int Clothes::getWeight()
{
	return 1500;
}

char* Clothes::getType()
{
	return _strdup("Clothes");
}

char* Clothes::toDeliver()
{
	return _strdup("Clothes is delivered");
}

void Clothes::destroy()
{
	delete this;
}


IPackage* ProductsFactory::CreatePackage()
{
	return new Products();
}

void ProductsFactory::destroy()
{
	delete this;
}


int Products::getWeight()
{
	return 3000;
}

char* Products::getType()
{
	return _strdup("Products");
}

char* Products::toDeliver()
{
	return _strdup("Products is delivered");
}

void Products::destroy()
{
	delete this;
}


IPackageFactory* createDocumentFactory()
{
	return new DocumentFactory();
}
IPackageFactory* createClothesFactory()
{
	return new ClothesFactory();
}
IPackageFactory* createProductsFactory()
{
	return new ProductsFactory();
}