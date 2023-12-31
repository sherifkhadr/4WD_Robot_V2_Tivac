/*************************************************************************//*
 Author        				: Sherif Ashraf Ali                      
 Date         				: 11 Feb 2023
 Project Name _ File Name   : AVR_DRIVER _ STD_Types.h
 Version       				: V-01                                   
 GitHub       				: https://github.com/sherifkhadr         
*//*************************************************************************/


#ifndef SERVIES_STD_TYPES_H_
#define SERVIES_STD_TYPES_H_


typedef signed char  						Sint8_t;
typedef unsigned char 						Uint8_t;


typedef signed short int 					Sint16_t;
typedef unsigned short int 					Uint16_t;
typedef signed int 							Sint32_t;
typedef unsigned int 						Uint32_t;
typedef signed long int  				Sint64_t;
typedef unsigned long int  			Uint64_t;



typedef signed char  						VSint8_t;
typedef unsigned char 						VUint8_t;
typedef volatile signed short int 			VSint16_t;
typedef volatile unsigned short int 		VUint16_t;
typedef volatile signed int 				VSint32_t;
typedef volatile unsigned int 				VUint32_t;
typedef volatile signed long int  	    VSint64_t;
typedef volatile unsigned  long int  	VUint64_t;


typedef float								float32_t;
typedef double								float64_t;
typedef long double 						float96_t;

typedef unsigned char  boolean;


typedef Uint8_t                   			Std_ReturnType;
#define E_OK                   				(Std_ReturnType)0x01
#define E_NOT_OK               				(Std_ReturnType)0x00


#ifndef TRUE
#define TRUE   1
#endif


#ifndef FALSE
#define FALSE 	0
#endif


#ifndef	STR_NULL
#define STR_NULL	'\0'
#endif

#ifndef	PTR_NULL
#define PTR_NULL	((void*)0)
#endif

#endif /* SERVIES_STD_TYPES_H_ */
