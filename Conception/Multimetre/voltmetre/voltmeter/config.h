#include "display.h"

/**
 * Configuration de l'application
 */

// Mode débuggage (0/1)
#define DEBUG 1

/**
 * Configuration du voltmetre
 * 
 * N° de la broche analogique de réception (analogRead())
 */
#define VOLTMETER_PIN A1

/**
 * Valeur de la résistance 1 R1 du diviseur
 */
#define VOLTMETER_R1 100000.0

/**
 * Valeur de la résistance 2 R2 du diviseur
 */
#define VOLTMETER_R2 10000.0

/**
 * Voltage en entrée (5V par défaut)
 */
#define VOLTMETER_VIN 5.0

/**
 * Pause après une lecture (ms)
 */
#define VOLTMETER_PAUSE 500

/**
 * Configuration de l'affichage
 */
#define DISPLAY_TYPE DISPLAY_TYPE_LCD_I2C


