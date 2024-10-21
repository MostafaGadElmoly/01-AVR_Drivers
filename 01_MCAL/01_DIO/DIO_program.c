#include "BIT_MATH.h"
#include "DIO_config.h"
#include "DIO_interface.h"
#include "DIO_private.h"
#include "STD_TYPE.h"

DIO_ErrorStatus DIO_VOIDSetPinDirection(u8 Copy_u8PORT, u8 Copy_u8PIN, u8 Copy_u8Direction) {
    DIO_ErrorStatus LOC_enumState = DIO_OK;

    /* Ensure port ID and PIN ID are in range */
    if ((Copy_u8PORT <= DIO_PORTD) && (Copy_u8PIN <= DIO_PIN7)) {
        if (Copy_u8Direction == DIO_PIN_OUTPUT) {
            switch (Copy_u8PORT) {
                case DIO_PORTB: SET_BIT(DDRB, Copy_u8PIN); break;
                case DIO_PORTC: SET_BIT(DDRC, Copy_u8PIN); break;
                case DIO_PORTD: SET_BIT(DDRD, Copy_u8PIN); break;
            }
        } else if (Copy_u8Direction == DIO_PIN_INPUT) {
            switch (Copy_u8PORT) {
                case DIO_PORTB: CLR_BIT(DDRB, Copy_u8PIN); break;
                case DIO_PORTC: CLR_BIT(DDRC, Copy_u8PIN); break;
                case DIO_PORTD: CLR_BIT(DDRD, Copy_u8PIN); break;
            }
        } else {
            LOC_enumState = DIO_NOK;
        }
    } else {
        LOC_enumState = DIO_NOK;
    }
    
    return LOC_enumState;
}

DIO_ErrorStatus DIO_VOIDSetPinValue(u8 Copy_u8PORT, u8 Copy_u8PIN, u8 Copy_u8Value) {
    DIO_ErrorStatus LOC_enumState = DIO_OK;

    if ((Copy_u8PORT <= DIO_PORTD) && (Copy_u8PIN <= DIO_PIN7)) {
        if (Copy_u8Value == DIO_PIN_HIGH) {
            switch (Copy_u8PORT) {
                case DIO_PORTB: SET_BIT(PORTB, Copy_u8PIN); break;
                case DIO_PORTC: SET_BIT(PORTC, Copy_u8PIN); break;
                case DIO_PORTD: SET_BIT(PORTD, Copy_u8PIN); break;
            }
        } else if (Copy_u8Value == DIO_PIN_LOW) {
            switch (Copy_u8PORT) {
                case DIO_PORTB: CLR_BIT(PORTB, Copy_u8PIN); break;
                case DIO_PORTC: CLR_BIT(PORTC, Copy_u8PIN); break;
                case DIO_PORTD: CLR_BIT(PORTD, Copy_u8PIN); break;
            }
        } else {
            LOC_enumState = DIO_NOK;
        }
    } else {
        LOC_enumState = DIO_NOK;
    }

    return LOC_enumState;
}

DIO_ErrorStatus DIO_VOIDGetPinValue(u8 Copy_u8PORT, u8 Copy_u8PIN) {
    DIO_ErrorStatus LOC_enumState = DIO_OK;
    u8 LOCAL_u8Value = 0;

    if ((Copy_u8PORT <= DIO_PORTD) && (Copy_u8PIN <= DIO_PIN7)) {    
        switch (Copy_u8PORT) {
            case DIO_PORTB: LOCAL_u8Value = GET_BIT(PINB, Copy_u8PIN); break;
            case DIO_PORTC: LOCAL_u8Value = GET_BIT(PINC, Copy_u8PIN); break;
            case DIO_PORTD: LOCAL_u8Value = GET_BIT(PIND, Copy_u8PIN); break;
        }
    } else {
        LOC_enumState = DIO_NOK;
    }

    return LOC_enumState;
}

DIO_ErrorStatus DIO_VOIDTogglePinValue(u8 Copy_u8PORT, u8 Copy_u8PIN) {
    DIO_ErrorStatus LOC_enumState = DIO_OK;

    if ((Copy_u8PORT <= DIO_PORTD) && (Copy_u8PIN <= DIO_PIN7)) {
        switch (Copy_u8PORT) {
            case DIO_PORTB: TOG_BIT(PORTB, Copy_u8PIN); break;
            case DIO_PORTC: TOG_BIT(PORTC, Copy_u8PIN); break;
            case DIO_PORTD: TOG_BIT(PORTD, Copy_u8PIN); break;
        }
    } else {
        LOC_enumState = DIO_NOK;
    }

    return LOC_enumState;
}

DIO_ErrorStatus DIO_VOIDSetPortDirection(u8 Copy_u8PORT, u8 Copy_u8Direction) {
    DIO_ErrorStatus LOC_enumState = DIO_OK;

    if (Copy_u8PORT <= DIO_PORTD) {
        if (Copy_u8Direction == DIO_PIN_OUTPUT) {
            switch (Copy_u8PORT) {
                case DIO_PORTB: DDRB = DIO_PORT_HIGH; break;
                case DIO_PORTC: DDRC = DIO_PORT_HIGH; break;
                case DIO_PORTD: DDRD = DIO_PORT_HIGH; break;
            }
        } else if (Copy_u8Direction == DIO_PIN_INPUT) {
            switch (Copy_u8PORT) {
                case DIO_PORTB: DDRB = DIO_PORT_LOW; break;
                case DIO_PORTC: DDRC = DIO_PORT_LOW; break;
                case DIO_PORTD: DDRD = DIO_PORT_LOW; break;
            }
        } else {
            LOC_enumState = DIO_NOK;
        }
    } else {
        LOC_enumState = DIO_NOK;
    }

    return LOC_enumState;
}

DIO_ErrorStatus DIO_VOIDSetPortValue(u8 Copy_u8PORT, u8 Copy_u8Value) {
    DIO_ErrorStatus LOC_enumState = DIO_OK;

    if (Copy_u8PORT <= DIO_PORTD) {
        if (Copy_u8Value == DIO_PORT_HIGH) {
            switch (Copy_u8PORT) {
                case DIO_PORTB: PORTB = DIO_PORT_HIGH; break;
                case DIO_PORTC: PORTC = DIO_PORT_HIGH; break;
                case DIO_PORTD: PORTD = DIO_PORT_HIGH; break;
            }
        } else if (Copy_u8Value == DIO_PORT_LOW) {
            switch (Copy_u8PORT) {
                case DIO_PORTB: PORTB = DIO_PORT_LOW; break;
                case DIO_PORTC: PORTC = DIO_PORT_LOW; break;
                case DIO_PORTD: PORTD = DIO_PORT_LOW; break;
            }
        } else {
            LOC_enumState = DIO_NOK;
        }
    } else {
        LOC_enumState = DIO_NOK;
    }

    return LOC_enumState;
}

DIO_ErrorStatus DIO_VOIDGetPortValue(u8 Copy_u8PORT) {
    DIO_ErrorStatus LOC_enumState = DIO_OK;
    u8 LOCAL_u8Value = 0;

    if (Copy_u8PORT <= DIO_PORTD) {
        switch (Copy_u8PORT) {
            case DIO_PORTB: LOCAL_u8Value = PINB; break;
            case DIO_PORTC: LOCAL_u8Value = PINC; break;
            case DIO_PORTD: LOCAL_u8Value = PIND; break;
        }

        if (LOCAL_u8Value == 0xFF) {
            return ALL_PINS_HIGH;
        } else if (LOCAL_u8Value == 0x00) {
            return ALL_PINS_LOW;
        } else {
            return MIXED_PIN_VALUES;
        }
    } else {
        LOC_enumState = DIO_NOK;
    }

    return LOC_enumState;
}

DIO_ErrorStatus DIO_VOIDTogglePortValue(u8 Copy_u8PORT) {
    DIO_ErrorStatus LOC_enumState = DIO_OK;

    if (Copy_u8PORT <= DIO_PORTD) {
        switch (Copy_u8PORT) {
            case DIO_PORTB: PORTB ^= 0xFF; break;
            case DIO_PORTC: PORTC ^= 0xFF; break;
            case DIO_PORTD: PORTD ^= 0xFF; break;
        }
    } else {
        LOC_enumState = DIO_NOK;
    }

    return LOC_enumState;
}
