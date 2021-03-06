//
// Definition of SDL Screen interface based on Pico
// for the Fast Light Tool Kit (FLTK).
//
// Copyright 2010-2016 by Bill Spitzak and others.
//
// This library is free software. Distribution and use rights are outlined in
// the file "COPYING" which should have been included with this file.  If this
// file is missing or damaged, see the license at:
//
//     https://www.fltk.org/COPYING.php
//
// Please see the following page on how to report bugs and issues:
//
//     https://www.fltk.org/bugs.php
//

/**
 \file Fl_PicoSDL_Screen_Driver.H
 \brief Definition of SDL Screen interface based on Pico.
 */

#ifndef FL_PICOSDL_SCREEN_DRIVER_H
#define FL_PICOSDL_SCREEN_DRIVER_H

#include "../Pico/Fl_Pico_Screen_Driver.H"


class FL_EXPORT Fl_PicoSDL_Screen_Driver : public Fl_Pico_Screen_Driver
{
public:
  Fl_PicoSDL_Screen_Driver();
  virtual ~Fl_PicoSDL_Screen_Driver();
  virtual double wait(double time_to_wait);
};


#endif // FL_PICOSDL_SCREEN_DRIVER_H
