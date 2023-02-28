#include<iostream>
#include"Human.h"

int main(int argc, char* argv[]){
	avdace::Human* human = new avdace::Human();
	human->setAge(28);
	human->setSex(1);
	std::cout<< "human:" <<human->getAge()<<"," <<human->getSex()<<std::endl;
	delete(human);
}
