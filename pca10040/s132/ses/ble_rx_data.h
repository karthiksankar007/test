#include "stdint.h"

#define SPI_TXBUFFER_SIZE 43
#define PHCALL_DATA 5
#define NAVI_DATA 9
#define DATA_CHECK 1
#define ENDOFGNRL 4

// General Ble data Structure
typedef struct
{
	uint8_t bLE_Connectivity_Status;
	struct
		{
		uint8_t bLE_No_Data_Available : 1;
		uint8_t bLE_General_Data : 1;
		uint8_t bLE_Phone_Call_Data : 1;
		uint8_t bLE_Navigation_Data : 1;
		uint8_t bLE_Music_Player_Data : 1;
		uint8_t bLE_GoPro_Data : 1;
		uint8_t bLE_Paired_Devices : 1;
		uint8_t bLE_reserved : 1;
		};
	uint8_t total_Message_Size;
	uint8_t reserved;
}Grnl_S;


// Phone data structure
typedef struct{
	struct
		{
		uint8_t phone_No_Data : 1;
		uint8_t phone_Message_Notification : 1;
		uint8_t phone_Incomming_call : 1;
		uint8_t phone_Ongoing_Call_notifiaction : 1;
		uint8_t phone_End_Call : 1;
		uint8_t phone_Missed_Call_Notification : 1;
		uint8_t phone_Reserved : 2;
		};
	uint8_t phone_Volume;
	struct
		{
		uint8_t phone_Ongoing_call_Timer_Start : 1;
		uint8_t phone_Ongoing_call_Timer_Stop : 1;
		uint8_t phone_Reserved_1 : 6;
		};
	uint8_t phone_Caller_Name_Identifier;
	uint8_t phone_Caller_Name_Size;
	uint8_t phone_caller_Name[15];
	uint8_t phone_Caller_Number_Identifier;
	uint8_t phone_Caller_Number_Size;
	uint8_t phone_Caller_Number[13];
	uint8_t phone_Reserved_2[4];
}phone_Data_S;


// Navigation Structure
typedef struct 
{
	struct
		{
		uint8_t navigation_No_Data : 1;
		uint8_t navigation_Turn_Type : 7;
		};
	uint8_t Navigation_Turn_Distance_Identifier;
	uint8_t Navigation_Turn_Distance_Size;
	uint8_t Navigation_Turn_Distance[10];
	uint8_t Navigation_Overall_Distance_Identifier;
	uint8_t Navigation_Overall_Distance_Size;
	uint8_t Navigation_Overall_Distance[10] ;
	uint8_t Navigation_ETA_Identifier;
	uint8_t Navigation_ETA_Hours;
	uint8_t Navigation_ETA_Minutes;
	uint8_t Navigation_Reserved[4];
}navigation_data_S;



 
