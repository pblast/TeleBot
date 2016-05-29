/***************************************************************************//**
 *   @file   main.c
 *   @brief  Archivo principal del proyecto TeleBot que se encargará de
 *           controlar el bot de Telegram genérico y del que partiran los
 *           desarrollos de los subproyectos TelvinaBot y JosepinBot.
 *   @author PBL
*******************************************************************************/

/******************************************************************************/
/*                                  INCLUDES                                  */
/******************************************************************************/
    #include <stdio.h>
    #include <stdlib.h>
    #include <unistd.h>
    #include <curl/curl.h>

    #include "main.h"
    #include "lang.h"
    #include "botTelegram.h"
    #include "daemon.h"
    #include "config.h"


/******************************************************************************/
/*                                  VARIABLES                                 */
/******************************************************************************/

    bot TelBot;


/******************************************************************************/
/*                               FUNCIONES                                    */
/******************************************************************************/
int main (int argc, char const *argv[]) {

    /* Si se está en modo depuración no se lanzará el demonio, si no que se
    mostrará por pantalla el contenido de log */
    #ifndef _DEBUG_
        if(startDaemon()){
            return 1;
        }
    #else
        system ("clear");
        fprintf (stdout, "******************* %s *******************\n", INTROTERM);
    #endif

    CargaConfig("TB.cfg");

    sendMSG(TelBot.adminId,"Acabo de despertar");

    /* En el bucle principal se consulta constantemente el estado del servidor
    para ver si se recibe un nuevo mensaje */
    while (1) {
        getMSG (1);

        printf("%s\n", s.ptr);
        free (s.ptr);
        sleep (5);
    }


    return 0;
}



/******************************* End of file***********************************/
