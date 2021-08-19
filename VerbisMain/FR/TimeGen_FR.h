#ifndef FR_TIMEGEN_FR_H_
#define FR_TIMEGEN_FR_H_

void Gen_Hour() {
	if ( config.isFormat24h == 0 && DateTime.hour > 12) {
		temp_Hour = temp_Hour - 12;
	}
	switch (temp_Hour) {
	case 0: {
		HOUR = HOUR + C_zero;
	}
	break;
	case 1: {
		HOUR = HOUR + C_une;
	}
	break;
	case 2: {
		HOUR = HOUR + C_deux;
	}
	break;
	case 3: {
		HOUR = HOUR + C_trois;
	}
	break;
	case 4: {
		HOUR = HOUR + C_quatre;
	}
	break;
	case 5: {
		HOUR = HOUR + C_cinq;
	}
	break;
	case 6: {
		HOUR = HOUR + C_six;
	}
	break;
	case 7: {
		HOUR = HOUR + C_sept;
	}
	break;
	case 8: {
		HOUR = HOUR + C_huit;
	}
	break;
	case 9: {
		HOUR = HOUR + C_neuf;
	}
	break;
	case 10: {
		HOUR = HOUR + C_dix;
	}
	break;
	case 11: {
		HOUR = HOUR + C_onze;
	}
	break;
	case 12:
	case 24:
	{
		HOUR = HOUR + C_douze;
	}
	break;
	case 13: {
		HOUR = HOUR + C_treize;
	}
	break;
	case 14: {
		HOUR = HOUR + C_quatorze;
	}
	break;
	case 15: {
		HOUR = HOUR + C_quinze;
	}
	break;
	case 16: {
		HOUR = HOUR + C_seize;
	}
	break;
	case 17: {
		HOUR = HOUR + C_dixsept;
	}
	break;
	case 18: {
		HOUR = HOUR + C_dixhuit;
	}
	break;
	case 19: {
		HOUR = HOUR + C_dixneuf;
	}
	break;
	case 20: {
		HOUR = HOUR + C_vingt;
	}
	break;
	case 21: {
		HOUR = HOUR + C_vingtetun;
	}
	break;
	case 22: {
		HOUR = HOUR + C_vingtdeux;
	}
	break;
	case 23: {
		HOUR = HOUR + C_vingttrois;
	}
	break;
	}
	if (temp_Hour == 0 or temp_Hour == 1) {
		HOUR = HOUR + C_heure;
	}
	else {
		HOUR = HOUR + C_heures;
	}
}

//==================

void Gen_Minute () {
	switch (DateTime.minute) {
	case 0:
	{
		//HOUR = HOUR + C_oclock;
	}
	break;
	case 1:
	case 59:
	{
		HOUR = HOUR + C_une;
	}
	break;
	case 2:
	case 58:
	{
		HOUR = HOUR + C_deux;
	}
	break;
	case 3:
	case 57:
	{
		HOUR = HOUR + C_trois;
	}
	break;
	case 4:
	case 56:
	{
		HOUR = HOUR + C_quatre;
	}
	break;
	case 5:
	case 55:
	{
		HOUR = HOUR + C_cinq;
	}
	break;
	case 6:
	case 54:
	{
		HOUR = HOUR + C_six;
	}
	break;
	case 7:
	case 53:
	{
		HOUR = HOUR + C_sept;
	}
	break;
	case 8:
	case 52:
	{
		HOUR = HOUR + C_huit;
	}
	break;
	case 9:
	case 51:
	{
		HOUR = HOUR + C_neuf;
	}
	break;
	case 10:
	case 50:
	{
		HOUR = HOUR + C_dix;
	}
	break;
	case 11:
	case 49:
	{
		HOUR = HOUR + C_onze;
	}
	break;
	case 12:
	case 48:
	{
		HOUR = HOUR + C_douze;
	}
	break;
	case 13:
	case 47:
	{
		HOUR = HOUR + C_treize;
	}
	break;
	case 14:
	case 46:
	{
		HOUR = HOUR + C_quatorze;
	}
	break;
	case 15:
	case 45:
	{
		HOUR = HOUR + C_quinze;
	}
	break;
	case 16:
	case 44:
	{
		HOUR = HOUR + C_seize;
	}
	break;
	case 17:
	case 43:
	{
		HOUR = HOUR + C_dixsept;
	}
	break;
	case 18:
	case 42:
	{
		HOUR = HOUR + C_dixhuit;
	}
	break;
	case 19:
	case 41:
	{
		HOUR = HOUR + C_dixneuf;
	}
	break;
	case 20:
	case 40:
	{
		HOUR = HOUR + C_vingt;
	}
	break;
	case 21:
	case 39:
	{
		HOUR = HOUR + C_vingtetun;
	}
	break;
	case 22:
	case 38:
	{
		HOUR = HOUR + C_vingtdeux;
	}
	break;
	case 23:
	case 37:
	{
		HOUR = HOUR + C_vingttrois;
	}
	break;
	case 24:
	case 36:
	{
		HOUR = HOUR + C_vingtquatre;
	}
	break;
	case 25:
	case 35:
	{
		HOUR = HOUR + C_vingtcinq;
	}
	break;
	case 26:
	case 34:
	{
		HOUR = HOUR + C_vingtsix;
	}
	break;
	case 27:
	case 33:
	{
		HOUR = HOUR + C_vingtsept;
	}
	break;
	case 28:
	case 32:
	{
		HOUR = HOUR + C_vingthuit;
	}
	break;
	case 29:
	case 31:
	{
		HOUR = HOUR + C_vingtneuf;
	}
	break;
	case 30:
	{
		HOUR = HOUR + C_et + C_demie;
	}
	break;
	}

}
void Gen_Time() {
	if (i_Time != DateTime.minute and (ntp_response_ok == true or manual_time_set == true) and date_ok == true) {
		//Serial.printf("HourFormat:%d\n", config.isFormat24h);
		if (config.c_e_o == 1) {
			HOUR = C_E_O;
		}
		else {
			HOUR = "";
		}
		//			if (DateTime.minute == 0) {
		//				HOUR = C_E_O;
		//				if (config.isFormat24h == 0 && DateTime.hour == 0) {
		//					temp_Hour = 24;
		//				}
		//				else {
		//				temp_Hour = DateTime.hour;
		//				}
		//				Gen_Hour();
		//				HOUR = HOUR + C_oclock;
		//			}
		if (DateTime.minute >= 0 && DateTime.minute < 31) {
			if (config.isFormat24h == 0 && DateTime.hour == 0) {
				temp_Hour = 24;
			}
			else {
				temp_Hour = DateTime.hour;
			}
			Gen_Hour();
			Gen_Minute();
		}
		else if (DateTime.minute >= 31 && DateTime.minute <= 59) {
			if (DateTime.hour == 23 && config.isFormat24h == 1) {
				temp_Hour = 0;
			}
			else {
				temp_Hour = DateTime.hour + 1;
			}
			Gen_Hour();
			HOUR = HOUR + C_moins;
			Gen_Minute();
		}
		//Gen_Minut();
		i_Time = DateTime.minute;
		clear_display();
		hour();
	}
}




#endif /* FR_TIMEGEN_FR_H_ */
