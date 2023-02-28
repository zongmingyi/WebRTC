#ifndef __HUMAN_H__
#define __HUMAN_H__



#include<iostream>

namespace avdace {
class Human{
	public:
		Human(){
			std::cout<<"construct human.."<<std::endl;
			age = 0;
			sex = 0;
		}
		~Human(){
			std::cout<<"destruct human"<<std::endl;
		}
				public:
								void setAge(int a);
								int getAge();

								void setSex(int a);
								int getSex();

				private:
								int age;
								int sex;
};// huamn end

}// namespace end
 //
#endif
