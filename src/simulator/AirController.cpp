/*
 * AirController.cpp
 *
 *  Created on: 21/07/2014
 *      Author: paco
 *
 *  Copyright 2014 Francisco Martín
 *
 *  This file is part of ATCSim.
 *
 *  ATCSim is free software: you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation, either version 3 of the License, or
 *  (at your option) any later version.
 *
 *  ATCSim is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with ATCSim.  If not, see <http://www.gnu.org/licenses/>.
 */

#include "AirController.h"
#include "Airport.h"
#include "Flight.h"
#include "Position.h"
#include <list>
#include <fstream>

namespace atcsim{

AirController::AirController() {
	// TODO Auto-generated constructor stub

}

AirController::~AirController() {
	// TODO Auto-generated destructor stub
}

void
AirController::doWork()
{
  std::list<Flight*> flights = Airport::getInstance()->getFlights();
  std::list<Flight*>::iterator it;


  Position pos0(3500.0, 0.0, 100.0);
  Position pos1(1500.0, 0.0, 50.0);
  Position pos2(200.0, 0.0, 25.0);
  Position pos3(-750.0, 0.0, 25.0);

  Position pos1_1(1000.0,10000.0,4500.0);
  Position pos1_2(15000.0,17000.0,4500.0);
  Position pos1_3(19000.0,10000.0,4500.0);
  Position pos1_4(15000.0,5000.0,4500.0);


  Position pos2_1(1000.0,10000.0,1000.0);
  Position pos2_2(15000.0,17000.0,1000.0);
  Position pos2_3(19000.0,10000.0,1000.0);
  Position pos2_4(15000.0,5000.0,1000.0);

  Position pos3_1(1000.0,-10000.0,4500.0);
  Position pos3_2(15000.0,-17000.0,4500.0);
  Position pos3_3(19000.0,-10000.0,4500.0);
  Position pos3_4(15000.0,-5000.0,4500.0);

  Position pos4_1(1000.0,-10000.0,1000.0);
  Position pos4_2(15000.0,-17000.0,1000.0);
  Position pos4_3(19000.0,-10000.0,1000.0);
  Position pos4_4(15000.0,-5000.0,1000.0);

  Position pos5_1(-19000.0,10000.0,4500.0);
  Position pos5_2(-15000.0,17000.0,4500.0);
  Position pos5_3(-10000.0,10000.0,4500.0);
  Position pos5_4(-15000.0,5000.0,4500.0);

  Position pos6_1(-19000.0,10000.0,1000.0);
  Position pos6_2(-15000.0,17000.0,1000.0);
  Position pos6_3(-10000.0,10000.0,1000.0);
  Position pos6_4(-15000.0,5000.0,1000.0);

  Position pos7_1(-19000.0,-10000.0,4500.0);
  Position pos7_2(-15000.0,-17000.0,4500.0);
  Position pos7_3(-10000.0,-10000.0,4500.0);
  Position pos7_4(-15000.0,-5000.0,4500.0);

  Position pos8_1(-19000.0,-10000.0,1000.0);
  Position pos8_2(-15000.0,-17000.0,1000.0);
  Position pos8_3(-10000.0,-10000.0,1000.0);
  Position pos8_4(-15000.0,-5000.0,1000.0);







  Route r0, r1, r2, r3;

  r0.pos = pos0;
  r0.speed = 100.0;
  r1.pos = pos1;
  r1.speed = 70.0;
  r2.pos = pos2;
  r2.speed = 70.0;
  r3.pos = pos3;
  r3.speed = 10.0;

Route r1_1,r1_2,r1_3,r1_4;
  r1_1.pos = pos1_1;
  r1_1.speed = 150.0;
  r1_2.pos = pos1_2;
  r1_2.speed = 150.0;
  r1_3.pos = pos1_3;
  r1_3.speed = 150.0;
  r1_4.pos = pos1_4;
  r1_4.speed = 150.0;

Route r2_1,r2_2,r2_3,r2_4;
  r2_1.pos = pos2_1;
  r2_1.speed = 150.0;
  r2_2.pos = pos2_2;
  r2_2.speed = 150.0;
  r2_3.pos = pos2_3;
  r2_3.speed = 150.0;
  r2_4.pos = pos2_4;
  r2_4.speed = 150.0;

Route r3_1,r3_2,r3_3,r3_4;
  r3_1.pos = pos3_1;
  r3_1.speed = 150.0;
  r3_2.pos = pos3_2;
  r3_2.speed = 150.0;
  r3_3.pos = pos3_3;
  r3_3.speed = 150.0;
  r3_4.pos = pos3_4;
  r3_4.speed = 150.0;

Route r4_1,r4_2,r4_3,r4_4;
  r4_1.pos = pos4_1;
  r4_1.speed = 150.0;
  r4_2.pos = pos4_2;
  r4_2.speed = 150.0;
  r4_3.pos = pos4_3;
  r4_3.speed = 150.0;
  r4_4.pos = pos4_4;
  r4_4.speed = 150.0;

Route r5_1,r5_2,r5_3,r5_4;
  r5_1.pos = pos5_1;
  r5_1.speed = 150.0;
  r5_2.pos = pos5_2;
  r5_2.speed = 150.0;
  r5_3.pos = pos5_3;
  r5_3.speed = 150.0;
  r5_4.pos = pos5_4;
  r5_4.speed = 150.0;

Route r6_1,r6_2,r6_3,r6_4;
  r6_1.pos = pos6_1;
  r6_1.speed = 150.0;
  r6_2.pos = pos6_2;
  r6_2.speed = 150.0;
  r6_3.pos = pos6_3;
  r6_3.speed = 150.0;
  r6_4.pos = pos6_4;
  r6_4.speed = 150.0;

Route r7_1,r7_2,r7_3,r7_4;
  r7_1.pos = pos7_1;
  r7_1.speed = 150.0;
  r7_2.pos = pos7_2;
  r7_2.speed = 150.0;
  r7_3.pos = pos7_3;
  r7_3.speed = 150.0;
  r7_4.pos = pos7_4;
  r7_4.speed = 150.0;

Route r8_1,r8_2,r8_3,r8_4;
  r8_1.pos = pos8_1;
  r8_1.speed = 150.0;
  r8_2.pos = pos8_2;
  r8_2.speed = 150.0;
  r8_3.pos = pos8_3;
  r8_3.speed = 150.0;
  r8_4.pos = pos8_4;
  r8_4.speed = 150.0;



  for(it = flights.begin(); it!=flights.end(); ++it)
  {
    if (!(Airport::getInstance()->is_booked_landing())){//-----revisar
      (*it)->getRoute()->clear();
      (*it)->getRoute()->push_back(r3);
      (*it)->getRoute()->push_front(r2);
      (*it)->getRoute()->push_front(r1);
      (*it)->getRoute()->push_front(r0);
      Airport::getInstance()->book_landing();
      (*it)->setIs_Landing(true);
      std::cout<<"HACIA EL AEROPUERTO!!!!!!!!!"<<'\n';
    }

    if((*it)->getRoute()->empty())
    {


      if(((*it)->getInitY()>0.0)&&((*it)->getInitX()>10000.0)&&((*it)->getInitZ()>3000.0))
      {
        (*it)->getRoute()->push_back(r1_1);
        (*it)->getRoute()->push_front(r1_2);
        (*it)->getRoute()->push_front(r1_3);
        (*it)->getRoute()->push_front(r1_4);
      }
      if(((*it)->getInitY()>0.0)&&((*it)->getInitX()>10000.0)&&((*it)->getInitZ()<3000.0))
      {
        (*it)->getRoute()->push_back(r2_1);
        (*it)->getRoute()->push_front(r2_2);
        (*it)->getRoute()->push_front(r2_3);
        (*it)->getRoute()->push_front(r2_4);
      }
      if(((*it)->getInitY()<0.0)&&((*it)->getInitX()>10000.0)&&((*it)->getInitZ()>3000.0))
      {
        (*it)->getRoute()->push_back(r3_1);
        (*it)->getRoute()->push_front(r3_2);
        (*it)->getRoute()->push_front(r3_3);
        (*it)->getRoute()->push_front(r3_4);
      }
      if(((*it)->getInitY()<0.0)&&((*it)->getInitX()>10000.0)&&((*it)->getInitZ()<3000.0))
      {
        (*it)->getRoute()->push_back(r4_1);
        (*it)->getRoute()->push_front(r4_2);
        (*it)->getRoute()->push_front(r4_3);
        (*it)->getRoute()->push_front(r4_4);
      }

      //------------------------------------------------------------------------------------------------
      if(((*it)->getInitY()>0.0)&&((*it)->getInitX()<10000.0)&&((*it)->getInitZ()>3000.0))
      {
        (*it)->getRoute()->push_back(r5_1);
        (*it)->getRoute()->push_front(r5_2);
        (*it)->getRoute()->push_front(r5_3);
        (*it)->getRoute()->push_front(r5_4);
      }
      if(((*it)->getInitY()>0.0)&&((*it)->getInitX()<10000.0)&&((*it)->getInitZ()<3000.0))
      {
        (*it)->getRoute()->push_back(r6_1);
        (*it)->getRoute()->push_front(r6_2);
        (*it)->getRoute()->push_front(r6_3);
        (*it)->getRoute()->push_front(r6_4);
      }
      if(((*it)->getInitY()<0.0)&&((*it)->getInitX()<10000.0)&&((*it)->getInitZ()>3000.0))
      {
        (*it)->getRoute()->push_back(r7_1);
        (*it)->getRoute()->push_front(r7_2);
        (*it)->getRoute()->push_front(r7_3);
        (*it)->getRoute()->push_front(r7_4);
      }
      if(((*it)->getInitY()<0.0)&&((*it)->getInitX()<10000.0)&&((*it)->getInitZ()<3000.0))
      {
        (*it)->getRoute()->push_back(r8_1);
        (*it)->getRoute()->push_front(r8_2);
        (*it)->getRoute()->push_front(r8_3);
        (*it)->getRoute()->push_front(r8_4);
      }
		}
	}
}

}  // namespace atcsim
