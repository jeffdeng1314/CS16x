#pragma once
#include "header.h"
#include "creature.h"
#include "human.h"
#include "elf.h"
#include "balrog.h"
#include "cyberdemon.h"
#include "dragon.h"
/*********************************************************************
 * ** Function:world
 * ** Description:world class
 * ** Parameters:n/a
 * ** Pre-Conditions:n/a
 * ** Post-Conditions:n/a
 * ** Return:n/a
*********************************************************************/
class world{
	protected:
		double  money;
		int num[5];
		human *h;
		elf *e;
		balrog *bal;
		cyberdemon *cyber;	
		dragon *drag;
	public:
		world();	
		~world();
		//human** get_human();
		world(const world &other);	
		void operator=(const world &other);
		
		void set_money(double);
		double get_money();

		human* get_human();//get human pointer
		void set_human();
		
		int* get_num();
		void set_num(int,int);

		elf* get_elf();//get elf pointer
		void set_elf();		

		balrog* get_balrog();
		void set_balrog();

		cyberdemon* get_cyberdemon();
		void set_cyberdemon();

		dragon* get_dragon();
		void set_dragon();
};
