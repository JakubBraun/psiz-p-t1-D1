#include "pch.h"
#include "list.h"



List* initList(void)
{
	List* pRoot = (List*)malloc(sizeof(*pRoot));
	
	return pRoot;
}

void deinitList(List* pRoot)
{
	free(pRoot);
	pRoot = NULL;
}
// function adding a car to the list
void addCar(List* pRoot, char* plateNum)
{

}
//function removes a car
void removeCar(List* pRoot, char* plateNum)
{

}

//func will print all cars in the list
void printAll(List* pRoot) {

}

int numberOfElements(List* pRoot) {
	return 0;
}
