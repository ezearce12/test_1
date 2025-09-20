# Trabajo Práctico Número 1 - Test-Driven Development - Testing de sistemas embebidos.

Este repositorio contiene la resolución del **Trabajo Práctico N°1** de la materia **Testing de sistemas embebidos**, utilizando la técnica **Test-Driven Development (TDD)** con el framework **Ceedling + Unity + CMock**.

---

## Consigna

Se debe desarrollar un **controlador de LEDs** siguiendo la metodología **TDD**.
Las pruebas a implementar y cumplir son:

- Después de la inicialización todos los LEDs deben quedar apagados.
- Se puede prender un LED individual.
- Se puede apagar un LED individual.
- Se pueden prender y apagar múltiples LEDs.
- Se pueden prender todos los LEDs de una vez.
- Se pueden apagar todos los LEDs de una vez.
- Se puede consultar el estado de un LED.

Además, el código debe mantenerse bajo control de versiones (Git).

## Descripción de los Tests

El archivo `test_leds.c` incluye todos los casos de prueba implementados

- Inicialización con todos los LEDs apagados.
- Encendido y apagado de un LED en particular.
- Encendido de múltiples LEDs y validación de estados independientes.
- Encendido y apagado masivo de todos los LEDs.
- Manejo de LEDs fuera de rango (0 y >16) verificando que se genera un error mediante el mock.
- Consulta de estado (`encendido/apagado`) de un LED específico.
- Pruebas en los extremos (LED 1 y LED 16).
- Reintentos de encendido/apagado para verificar idempotencia.
