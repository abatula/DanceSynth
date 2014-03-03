/*
 * DanceGenerator.h
 * Written by: Mark Koh
 * DARwIn-OP Dance Synthesis Project
 * 06/04/2013
 *
 * Description: This object takes a ssequenceTable and uses it to generate dances
 * based as a state-based machine.
 * 
 */

#ifndef DANCEGENERATOR_H
#define DANCEGENERATOR_H


//-----------------------------------------------------------------------------
//------------------------ Dependencies ---------------------------------------
//-----------------------------------------------------------------------------

#include <iostream>
#include <stdlib.h>
#include <fstream>
#include "SequenceTable.h"

using namespace std;

//-----------------------------------------------------------------------------
//------------------------ Global Variables -----------------------------------
//-----------------------------------------------------------------------------

//None yet

//-----------------------------------------------------------------------------
//------------------------ Class Declaration ----------------------------------
//-----------------------------------------------------------------------------

class DanceGenerator {
  public:
    //-------------------------------------------------  
    //-------------- Constructors ---------------------  
    //-------------------------------------------------  
    DanceGenerator(SequenceTable table);

    //-------------------------------------------------  
    //-------------- Destructor ---------------------  
    //------------------------------------------------- 
    ~DanceGenerator();

    //-------------------------------------------------  
    //-------------- Inspectors - ---------------------  
    //------------------------------------------------- 
    void init();
    int currentPos();
    bool atBase() const;



    //-------------------------------------------------  
    //-------------- Mutators -------------------------  
    //------------------------------------------------- 
    int next();
    void setPos(int pos);


  protected:
    bool _atBase;
    int _currentPos;
    SequenceTable _table;
};

#endif
