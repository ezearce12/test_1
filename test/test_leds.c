#include "unity.h"
#include "leds.h"

void setUp(void) {  
}

void tearDown(void) {
}

//Iniciar el driver y revisar que todos los leds esten apagados
void test_al_iniciar_todos_los_leds_estan_apagados(void){
    uint16_t puerto_virtual = 0xFFFF;
    ledsInitDriver(&puerto_virtual);

    TEST_ASSERT_EQUAL_HEX16(0x0000,puerto_virtual);
}