/***************************************************************************//**
 *   @file   lang.h
 *   @brief  Este archivo añade soporte al multilenguage. En el se recogen todas
 *           las cadenas que se mostrarán tanto por pantalla como por el bot en
 *           función del lenguaje seleccionado.
 *   @author PBL
*******************************************************************************/

#ifndef LANG_H
#define LANG_H

#ifdef _LANG_AS
    #define INTROTERM "PROGRAMA DE TELEBOT"
    #define ERRCONEXTERM " Nun se pue conectar col bot\n"
    #define OKCONEXTERM "Pudo crease la conexión col bot\n"
#elif _LANG_ES
    #define INTROTERM "PROGRAMA DE TELEBOT"
    #define ERRCONEXTERM "No se puede conectar con el bot\n"
    #define OKCONEXTERM "Se ha podido establecer la conexión con el bot\n"
#endif


/******************************************************************************/
/*                                  DEFINES                                   */
/******************************************************************************/


/******************************************************************************/
/*                                  PROTOTIPOS                                */
/******************************************************************************/

#endif
/******************************* End of file***********************************/
