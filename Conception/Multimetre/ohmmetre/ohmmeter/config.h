#include "display.h"

/**
 * Configuration de l'application
 */

// Mode débuggage (0/1)
#define DEBUG 1

/**
 * Configuration de l'ohmmètre
 * 
 * N° de la broche analogique de réception (analogRead())
 */
#define OHMMETER_PIN A0

/**
 * Valeur de la résistance 1 R1 (1K par défaut)
 */
#define OHMMETER_R1 1000.0

/**
 * Voltage en entrée (5V par défaut)
 */
#define OHMMETER_VIN 5.0

/**
 * Pause après une lecture (ms)
 */
#define OHMMETER_PAUSE 500

/**
 * Configuration de l'affichage
 */
#define DISPLAY_TYPE DISPLAY_TYPE_LCD_I2C


